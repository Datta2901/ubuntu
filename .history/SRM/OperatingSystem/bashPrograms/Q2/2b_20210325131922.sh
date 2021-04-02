

echo Enter a number
read num

declare -a days=("0","Monday(weekday)","Tuesday(weekday)","Wednesday(weekday)","Thursday(weekday)","Friday(weekday)","Saturday(WEEKEND)","Sunday(WEEKEND)")
daysLength =${#days[@]}
for i in "${days[@]}"
do 
    echo $i
done



# use for loop to read all values and indexes
for (( i=1; i<${daysLength}+1; i++ ));
do
    echo
done
