#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    c
else
    X="Execute = No"
fi