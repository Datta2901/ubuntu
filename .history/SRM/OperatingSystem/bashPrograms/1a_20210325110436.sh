#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    echo "T"
else
    X="Execute = No"
fi