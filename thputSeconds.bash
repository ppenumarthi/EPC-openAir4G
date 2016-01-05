#!/bin/bash
# bash thputSeconds.bash epc.final

#echo $(head -n 1 $1  | awk '{}{}{print $2}');
a=$(head -n 1 $1  | awk '{}{}{print $2}');
#echo $a;
aint=${a%.*}
#echo $aint;

b=$(tail -n 1 $1  | awk '{}{}{print $2}');
#echo $b;
bint=${b%.*}
#echo $bint;

maxThput=0;
tThput=1;
count=1;
while [ $aint -lt $bint ]
do
   thput=$(grep $aint $1 | wc -l);
   #thput= $[$thput*1500*8/1000000/3];
   #tThput=$[$tThput+$thput];
   #echo $count $[$aint-2] $thput;
   #echo $[$aint-2] $thput;
   #echo $aint $thput;
   echo -n "$[$aint-1436750953] ";	
   echo " ($thput*1500*8)/1000000/3" | bc -l; 
   #thput=$(echo "($thput*1500*8)/1000000/3" | bc -l); 
   thput=$[$thput*1500*8/1000000/3];
   if [ $maxThput -lt $thput ]
   then
     maxThput=$[$thput+0];
   fi
   tThput=$[$tThput+$thput];
   #echo -e $aint;	
   aint=$[$aint+1];
   count=$[$count+1];
done
#tThput=$[$tThput/$count | bc -l]; 
tThput=$[$tThput/$count]; 
#tThput=echo "$tThput/$count" | bc -l 
#echo "Average Throughput" $tThput 
#echo "Maximum Throughput" $maxThput 
