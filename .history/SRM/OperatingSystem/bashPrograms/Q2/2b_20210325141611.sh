

echo Enter a number
read num

declare -a days=("0" "Monday(weekday)" "Tuesday(weekday)" "Wednesday(weekday)" "Thursday(weekday)" "Friday(weekday)" "Saturday(WEEKEND)" "Sunday(WEEKEND)")
daysLength=${#days[@]}
echo $daysLength
# for i in "${#days[@]}"
# do 
#     echo $i
# done

count=0
for ((i=1; i<${daysLength}+1; i++ ));
do
    if [ $count -le $(num+1 ]
    then
        echo ${days[$i]}
        count=$count+1
        if [ $i == $daysLength-1 ]
        then
            i=0
        fi
    else
        break
    fi
done
