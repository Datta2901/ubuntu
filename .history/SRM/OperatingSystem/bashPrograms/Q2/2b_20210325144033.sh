

echo Enter a number
read num
count=0
for ((i=1; i<${daysLength}+1; i++ ));
do
    if [ $count -le $num+1 ]
    then
        echo "Day :" ${count}${days[$i]}
        count=$count+1
        if [ $i == ${daysLength}-1 ]
        then
            i=0
        fi
    else
        break
    fi
done
