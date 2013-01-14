#!/usr/bin/perl

# 
# cyg-resolve.pl - CygProfiler resolver
# 
# Michal Ludvig <michal@logix.cz>
# http://www.logix.cz/michal/devel
# 
# Use this script to parse the output of the CygProfile suite.
# 

use strict;
use warnings;
no warnings 'portable';
use diagnostics;
use English;

my %symtab;
my ($binfile, $textfile, $levelcorr);

$OUTPUT_AUTOFLUSH=1;

&help() if($#ARGV < 1);
$binfile=$ARGV[0];
&help() if($binfile =~ /--help/);
$textfile=($#ARGV > 0 ? $ARGV[1] : "cygprof.log");
$levelcorr=($#ARGV > 1 ? $ARGV[2] : -1);

&main();

# ==== Subs

sub help()
{
	printf("CygProgile parser, Michal Ludvig <michal\@logix.cz>, 2002-2003\n");
	printf("Usage: %s <bin-file> <log-file> [<correction>]\n", $0);
	printf("\t<bin-file>   Program that generated the logfile.\n");
	printf("\t<log-file>   Logfile generated by the profiled program.\n");
	printf("\t<correction> Correction of the nesting level.\n");
	exit;
}

sub main()
{
	my($offset, $type, $function);
	my($nsym, $nfunc);
	
	$nsym=0;
	$nfunc=0;
	
	open(NM, "mips-linux-gnu-nm $binfile|") or die("Unable to run 'nm $binfile': $!\n");
	printf("Loading symbols from $binfile ... ");
	
	while(<NM>)
	{
		$nsym++;
		next if(!/^([0-9A-F]+) (.) (.+)$/i);
		$offset=hex($1); $type=$2; $function=$3;
		next if($type !~ /[tT]/);
		$nfunc++;
		$symtab{$offset}=$function;
	}
	printf("OK\nSeen %d symbols, stored %d function offsets\n", $nsym, $nfunc);
	close(NM);

	open(TEXT, "$textfile")
		or die("Unable to open '$textfile': $!\n");
	
	if ($levelcorr == -1)
	{
		$levelcorr = 0;
		while(<TEXT>)
		{
			if ((/^.*[+-] (-*\d+)/) && ($1 < -$levelcorr))
				{ $levelcorr = -$1; }
		}
		printf("Level correction set to %d\n", $levelcorr);
		seek(TEXT, 0, 0);
	}

	while(<TEXT>)
	{
		# Change the pattern if the output format 
		# of __cyg_...() functions has changed.
		if(!/(.*)([+-]) (-*\d+) 0x([[:xdigit:]]+) 0x([[:xdigit:]]+)\s*(\d*)/)
			{ print $_; next; }
		else
		{
			my $prolog=$1;
			my $type=$2;

			my $level=$3 + $levelcorr;
			my $off1=hex($4);
			my $off2=hex($5);
			my $pid=$6;

			printf("$prolog\n") if ($prolog);

			# Don't print exits
			next if($type eq "-");
			my $sym=(defined($symtab{$off1})?$symtab{$off1}:"???");

			printf("\t%s %2d 0x%x (from 0x%x) %*s%s\n",
				$type, $level, $off1, $off2,
				$level+1, " ", "$sym()");
		}
	}
	close(TEXT);

	printf("done\n");
}
