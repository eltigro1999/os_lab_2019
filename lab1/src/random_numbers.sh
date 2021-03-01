#!/bin/bash
touch numbers.txt
for((i=0;i<150;++i))
do
echo -n "$RANDOM ">>numbers.txt
done

