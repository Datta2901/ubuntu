#!/bin/bash

echo Enter a number
read num
temp = num
sum = 0
while [ num -gt 0 ]
do
    remainder = num % 10
    sum += remainder * remainder * remainder
    num /= 10
done

