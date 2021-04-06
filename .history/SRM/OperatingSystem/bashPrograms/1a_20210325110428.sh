#!/bin/bash

echo -n "Enter file name : "
read file

if [ -x $file ] 
then
    cho
else
    X="Execute = No"
fi