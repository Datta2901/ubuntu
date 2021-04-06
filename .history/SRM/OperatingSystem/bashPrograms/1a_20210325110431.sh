#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    ech
else
    X="Execute = No"
fi