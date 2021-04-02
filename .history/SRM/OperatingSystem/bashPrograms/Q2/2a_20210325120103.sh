#!/bin/bash
echo Enter a number
read num
temp=$num
sum=0
while [ $num -gt 0 ]
do
    remainder=$(($num % 10))
    sum=$(($sum + $remainder * $remainder * $remainder))
    num=$(($num / 10))
done

if [ $sum == $temp ]
then 
    echo It is a Armstrong number
else
    echo It is not a Armstrong number
fi
