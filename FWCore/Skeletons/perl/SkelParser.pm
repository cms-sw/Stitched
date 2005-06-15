package SkelParser;
# $Id $
###########################################################################
#  simple little script to make event setup producer skeletons
# 
#  execution:  mkesprod producername recordname datatype1 [ [datatype2] ...]  
# 
#  output:  producername/
#                         Buildfile
#                         interface/
#                         sr/producername.cc
#                               producername_DONT_TOUCH.cc
#                         doc/
#                         test/
#  required input:
# 
#  producername = name of the producer
#  recordname   = name of the record to which the producer adds data
#  datatype     = a list of the types of data created by the producer
# 
#  optional input:
# 
#  none
# 
#  example:
#  mkesprod MyProducer  MyRecord MyData
#        --> write  MyProducer/
#                               Buildfile
#                               interface/
#                               src/MyProducer.cc
#                               doc/
#                               test/
#  
#   the script tries to read in
#   a filename .tmpl in users HOME directory which contains the following lines
#             First : your first name
#             Last : your last name
#   if .tmpl is not found and firstname and lastname are blank the
#   enviroment variable LOGNAME is used to obtain the "real life" name
#   from the output of finger.
#
#   Enviroment variable CMS_SKEL may point to a directory that
#   contains the skeleton files.
#
#   mkesprod will not overwrite existing files
#
#   Skeleton Keywords (Case matters):
#      prodname  :  overwritten with routine name
#      John Doe  :  overwritten with author's name
#      day-mon-xx:  overwritten with todays date
#      RCS(key)  :  becomes $key$
#
#   author of the script: Chris Jones
#                         (based on scripts used by the CLEO experiment)
#   
###########################################################################

BEGIN {
    use Exporter ();
    our ($VERSION, @ISA, @EXPORT, @EXPORT_OK, %EXPORT_TAGS);
    
    # set the version for version checking
    $VERSION     = 1.00;
    # if using RCS/CVS, this may be preferred
    $VERSION = sprintf "%d.%03d", q$Revision: 1.1 $ =~ /(\d+)/g;
    
    @ISA         = qw(Exporter);
    @EXPORT      = qw(&copy_file &make_file &grandparent_parent_dir &mk_package_structure);
    %EXPORT_TAGS = ( );     # eg: TAG => [ qw!name1 name2! ],
    
    # your exported package globals go here,
    # as well as any optionally exported functions
    @EXPORT_OK   = qw();
}
our @EXPORT_OK;


sub mk_package_structure {
    my $name = $_[0];

    mkdir("$name", 0777) || die "can not make dir $name";
    mkdir("$name/interface", 0777) || die "can not make dir $name/interface";
    mkdir("$name/src", 0777) || die "can not make dir $name/src";
    mkdir("$name/test", 0777) || die "can not make dir $name/test";
    mkdir("$name/doc", 0777) || die "can not make dir $name/doc";
}

sub grandparent_parent_dir {
    my $cwd;
    chomp($cwd = `pwd`);
    ($cwd =~ m!/([^/]*)/([^/]*)$!);
}

# copy file
sub copy_file {
# first argument is file to be copied
my $skeleton = $_[0]; 
# second argument is the name of the new file
my $outfile = $_[1];

if (-s "$outfile") {
    print "mkesprod  W: $outfile FILE ALREADY EXISTS WILL NOT OVERWRITE!!\n";
    print "mkesprod  W: *****************************************************\n";
} else {

#   write out some stuff to the screen
    print "mkesprod  I: copying file $skeleton to $outfile\n";

#open the skeleton file and output file
    open(::IN,$skeleton)    or die "Opening $skeleton: $!\n";
    open(::OUT,">$outfile") or die "Opening $outfile: $!\n";

# loop over lines in "skeleton" and overwrite where neccessary
    while(<::IN>) {
	print ::OUT $_;
    }
    close(::IN);   
    close(::OUT);
}
}


# generate file
sub make_file {
# first argument is the skeleton file to use
my $skeleton = $_[0];
# second argument is the name of the output file
my $outfile = $_[1];

my $substitutions = $_[2];

if (-s "$outfile") {
    print "mkesprod  W: $outfile FILE ALREADY EXISTS WILL NOT OVERWRITE!!\n";
    print "mkesprod  W: *****************************************************\n";
} else {
#  get the current date
    $now = `date`;
    chop($now);

# get authors name from $HOME/.tmpl file

    $afrom = "command line";
    if ($author1 eq "" && -s "$home/.tmpl") {
       open(IN,"$home/.tmpl");
       $afrom = "users .tmpl file";
       while(<IN>) {
	  if (/First\w*/) {
	     @words = split(/:/, $_);
	     $author1 = $words[1]; 
	     chop($author1);
	  } elsif (/Last\w*/) {
	     @words = split(/:/, $_);
	     $author2 = $words[1];
	     chop($author2);
	  }
       }
       close(IN);
       $author = "$author1 $author2";
    }
#
# if author is still blank fill it in with REAL LIFE name in finger output
#
    if ($author1 eq "") {
       $author1 = $ENV{"LOGNAME"};
       foreach $_ (`finger -m -s "$author1"`) {
	  if (/$ENV{"LOGNAME"}\s\w*/) {
	     @words = split(/\s{2,}/, $_);
	     $author = $words[1];
	     chomp($author);
	     $afrom = "the output finger cmnd";
	     last;
	  }
       }
    }
#   write out some stuff to the screen
    print "mkesprod  I: using skeleton: $skeleton \n";
    print "mkesprod  I: authors name is: $author, determined by $afrom \n";
    print "mkesprod  I: creating file: $outfile \n";

#open the skeleton file and output file
    open(IN,$skeleton)    or die "Opening $skeleton: $!\n";
    open(OUT,">$outfile") or die "Opening $outfile: $!\n";

# loop over lines in "skeleton" and overwrite where neccessary
    while(<IN>) {
#	print "size @$substitutions \n";
	foreach $subst (@$substitutions) {
	    #print $subst;
	    eval $subst;
	}
#  Preserve case for lowercase
#	s/prodname/$name/g;
#	s/recordname/$recordname/g;
#	s/skelsubsys/$gSUBSYS/g;
#  Map uppercase to uppercase
#	s/PRODNAME/\U$name/g;
	s/John Doe/$author/;
	s/day-mon-xx/$now/;
#  Handle RCS keywords
	s/RCS\((\w+)\)/\$$1\$/g;
	#print $_;
#  Handle embeded perl commands
	if( /\@perl(.*)@\\perl/ ) {
	    #print $1;
	    eval "$1";
	    #print $result;
	    s/\@perl(.*)@\\perl/$result/;
	}
	print OUT $_;
    }
    close(IN);   
    close(OUT);
    if ($flag =~ /[bpC]/) {
	chmod(0755,$outfile);
    }
}
}

1;
