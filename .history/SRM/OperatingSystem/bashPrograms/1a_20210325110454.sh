#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    echo "The given file has execute permission"
else
   e
fi