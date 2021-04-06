#!/bin/bash

read -p "Enter a starting value "
read -p "Enter a ending value "
echo "Perfect numbers are: "
until [ ! $a -le $b ]
do 
    sum = 0;
    j = 1
    i = $after
    until [ ! $j -lt $i ]
    do
        if [ $((i % j)) -eq 0]
        then 
            sum=$((sum+j))
        fi
        j=$((j+1))
    done
    if [ $sum -eq $a ]
        

done
echo .