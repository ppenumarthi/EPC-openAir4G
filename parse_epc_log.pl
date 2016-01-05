#! /usr/bin/perl

use strict;


if ($#ARGV < 1)
{
	die "Usage: logfile outputfile\n";
}

my $logfile = $ARGV[0];
my $outputfile = $ARGV[1];
open (f,"<$logfile") or die "Cant read logfile\n";
my $data = "";
my $timestamp = 0;
my $socketds = 0;
my %SGWTable = ();
my %PGWTable = ();
my %SendTable = ();
my $sgw_counter = 0;
my $pgw_counter = 0;
my $send_counter = 0;
my $socketid = 0;
my $packetid = 0;
my $totaldelay = 0;
my $sgwdelay = 0;
my $pgwdelay = 0;
my $sgwrecv = 0;
my $fwiprecv = 0;
my $send = 0;
my $totalpackets = 0;
my $firstpkttime = 0;
my $lastpkttime = 0;
my $totalsgwdelay = 0;
my $totalpgwdelay = 0;
my $aggtotaldelay = 0;
my $avgload = 0;
my $avgtotaldelay = 0;
my $avgsgwdelay = 0;
my $avgpgwdelay = 0;
# Keep a hash table
# Reading the log file
# The packet first arrives at the SGW
# Keep a packet counter for each of the packet types and then update that packet counter
while ($data = <f>)
{
	chomp($data);
	# Data received at the SGW interface
  if ($data =~/.*RECD\s(\d+\.\d+)\sGTPV1_U_DATA_IND\s\d+\s\w+\s\w+\s\w+\s\w+\s(\d+)/)
	{
		$timestamp = $1;
		$socketds = $2;
		$sgw_counter = $sgw_counter + 1;
		$SGWTable{$socketds}->{$sgw_counter} = $timestamp;
		#print "SGW $1 $2 \n";
	
	}
	# Data received at the PGW interface
	if ($data =~/.*RECD\s(\d+\.\d+)\sGTPV1U_TUNNEL_DATA_IND\s\d+\s\w+\sTASK_FW_IP/)
	{
		$timestamp = $1;
		$pgw_counter = $pgw_counter + 1;
		$PGWTable{$pgw_counter} = $timestamp;
		#print "PGW $1 \n";
	}
	# Data sent from the SGI interface
	if ($data =~/.*SEND\s(\d+\.\d+)\sDATA_SENT_FROM_SGI\s\d+\s\w+/)
	{
		$timestamp = $1;
		$send_counter = $send_counter + 1;
		$SendTable{$send_counter} = $timestamp;		
		#print "SGI $1 \n";
	}

}
close(f);



# Print the packet number, total processing time, sgw processing time, time stamp, socket-descriptor[Used to identify two different base stations]
# Identify different base stations
my $firstbool = 0;
my $lastbool = 0;

foreach $socketid (sort {$a <=> $b} keys %SGWTable)
{
	open(out1,">$outputfile.$socketid") or die "cant open $outputfile.$socketid\n";
	open(out2,">>$outputfile.all") or die "cant open $outputfile.$socketid\n";
	foreach $packetid (sort {$a <=> $b} keys %{$SGWTable{$socketid}})
	{
		$totalpackets = $totalpackets + 1;
		$sgwrecv = $SGWTable{$socketid}->{$packetid};
		$send = $SendTable{$packetid};
		$fwiprecv = $PGWTable{$packetid};
		$totaldelay = ($send - $sgwrecv) * 1000000;
		$sgwdelay = ($fwiprecv - $sgwrecv) * 1000000; # in micro-seconds
		$pgwdelay = ($send - $fwiprecv)*1000000;
		$totalsgwdelay = $totalsgwdelay + $sgwdelay;
		$totalpgwdelay = $totalpgwdelay + $pgwdelay;
		$aggtotaldelay = $aggtotaldelay + $totaldelay;
		#print "AGG: $aggtotaldelay \n";
		$lastpkttime = $sgwrecv;
		if ($firstbool == 0)
		{
			$firstbool = 1;
			$firstpkttime = $sgwrecv;
		}

		print out1 "$packetid $totaldelay $sgwdelay $pgwdelay $send $socketid \n";
		print out2 "$packetid $totaldelay $sgwdelay $pgwdelay $send $socketid \n";
	}
	close(out1);
}
$avgload = ($totalpackets * 4320)/($lastpkttime-$firstpkttime); # Bytes/s. 4320 is the packet size
$avgtotaldelay = $aggtotaldelay/$totalpackets; # Bytes/s. 4320 is the packet size
$avgsgwdelay = $totalsgwdelay/$totalpackets; # Bytes/s. 4320 is the packet size
$avgpgwdelay = $totalpgwdelay/$totalpackets; # Bytes/s. 4320 is the packet size
print "FINAL_STATS: PKTS:$totalpackets $firstpkttime $lastpkttime AVGLOAD:$avgload TOTALDELAY:$avgtotaldelay SGWDELAY:$avgsgwdelay PGWDELAY:$avgpgwdelay $aggtotaldelay $totalsgwdelay\n";


# Avg total processing delay
# Avg sgw delay
# Avg pgw delay
# Total number of packets
# percentiles for load 
# End-end delay
# Also Have the slides
# Repeat the 4BS--> EPC delay
