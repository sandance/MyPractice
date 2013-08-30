#!/bin/bash

for msc in $(cat ~/msc.lst) 
do  
	echo "Processing $msc"; 
	rsync -r /sanset/vzwPDE/JUN_JULY/$msc/201307 root@10.255.6.201:/opt/disk5/July_SLA_Data/$msc/201307
done

cat /dev/null | mail -s "Copy from 6.253 to /opt/disk5 is done " nislam@airsage.com

