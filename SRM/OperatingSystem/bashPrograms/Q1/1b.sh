#!/bin/bash
echo -n "enter file name : "
read file

if [ -w $file ] 
then
    W="Write = yes"
else
    W="Write = No"
fi

if [ -x $file ] 
then
    X="Execute = yes" 
else
    X="Execute = No"
fi

if [ -r $file ]
then
     R="Read = yes" 
else 
     R="Read = No"
fi

echo "$file permissions"
echo "$W"
echo "$R"
echo "$X"

chmod +rwx $file

if [ -w $file ] 
then
    W="Write = yes"
else 
    W="Write = No"
fi

if [ -x $file ]
then
    X="Execute = yes" 
else
    X="Execute = No"
fi

if [ -r $file ]
then
    R="Read = yes" 
else
    R="Read = No"
fi

echo "$file after changing permissions"
echo "$W"
echo "$R"
echo "$X"
