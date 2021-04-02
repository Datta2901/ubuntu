#!/bin/bash

echo Enter a number
read num
temp = num
while [ num -gt 0 ]
do
    remainder = num % 10
    