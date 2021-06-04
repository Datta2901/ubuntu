#!/bin/bash

i=2
sum=0
while [ $i -le 100 ]
do
    # echo $i
    sum=$(($i+$sum))
    i=$(($i+2))

done
echo "Sum of Even Numbers between 1 - 100 are : $sum" 
