#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    ch
else
    X="Execute = No"
fi