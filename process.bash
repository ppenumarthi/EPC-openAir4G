filename=$1;
cp $filename $filename.pruned
grep "RECD\|SEND" $filename.pruned > $filename.final
perl parse_epc_log.pl $filename.final $filename
grep -v "-" $filename.all > $filename.all1
echo "Total Delay: "
cat $filename.all1 | awk 'BEGIN{sum=0;count=0;}{sum=sum+$2; count=count+1;}END{print sum/count}'
echo "SGW  Delay: "
cat $filename.all1 | awk 'BEGIN{sum=0;count=0;}{sum=sum+$3; count=count+1;}END{print sum/count}'
echo "PGW Delay: "
cat $filename.all1 | awk 'BEGIN{sum=0;count=0;}{sum=sum+$4; count=count+1;}END{print sum/count}'
echo "Throughput: "
cat $filename.all1 | awk 'BEGIN{sum=0;time1=0;time2=0;}{ if(count==0){time1=$5;}; count=count+1;}END{time2=$5; print time1; print time2; printf "%10.2f", (count*1500*8)/(time2-time1);}'
