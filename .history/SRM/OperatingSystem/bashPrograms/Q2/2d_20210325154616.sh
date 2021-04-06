#! /bin/bash

read string
len=${#string}

i=$((len -1))
until [ !  $i -ge 0 ]
do
reverse="$reverse${string:$i:1}"
i=$((l - 1))
done
echo $reverse