#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    echo "The "
else
    X="Execute = No"
fi