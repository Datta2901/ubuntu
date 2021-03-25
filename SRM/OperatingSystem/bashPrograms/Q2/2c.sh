#!/bin/bash

read -p "Enter a starting value " a
read -p "Enter a ending value " b
echo "Perfect numbers are: "
until [ ! $a -le $b ]
do 
    sum=0
    j=1
    i=$a
    until [ ! $j -lt $i ]
    do
        if [ $((i % j)) -eq 0 ]
        then 
            sum=$((sum+j))
        fi
        j=$((j+1))
    done
    if [ $sum -eq $((a)) ]
    then 
        echo -n "$a "
    fi    
    a=$((a+1))

done

