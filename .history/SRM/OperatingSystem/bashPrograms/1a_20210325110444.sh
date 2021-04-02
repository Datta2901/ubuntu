#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    echo "The given file has execute pe"
else
    X="Execute = No"
fi