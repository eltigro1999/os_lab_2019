#!/bin/bash
#average.sh
average=quantity=0
while [ -n "$1" ];
do
((quantity++))
((average+="$1"))
#let "average+=$1"
#let "quantity+=1"
shift
done
echo "$(($average/$quantity))"
