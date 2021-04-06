echo -n "enter file name : "
read file

[ -w $file ] && W="Write = yes" || W="Write = No"
[ -x $file ] && X="Execute = yes" || X="Execute = No"
[ -r $file ] && R="Read = yes" || R="Read = No"

echo "$file permissions"
echo "$W"
echo "$R"
echo "$X"

chmod +rwx $file
if[ -w $file ] 
    W="Write = yes" || W="Write = No"
[ -x $file ] && X="Execute = yes" || X="Execute = No"
[ -r $file ] && R="Read = yes" || R="Read = No"
echo "$file after changing permissions"
echo "$W"
echo "$R"
echo "$X"