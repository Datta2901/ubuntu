#!/bin/bash

read -p "Enter a starting value "
read b

for((i=$a;i<=$b;i++))
do 
j=1
sum=0
while [ $j<$i]
do 
    if [ $i%$j == 0 ]
        sum=$(($sum+$j))
        j=$(($j+1))
done

if [ $sum == $i ]
then
    echo $i
fi
done
echo .