

echo Enter a number
read num

declare -a days=("0","Monday(weekday)","Tuesday(weekday)","Wednesday(weekday)","Thursday(weekday)","Friday(weekday)","Saturday(WEEKEND)","Sunday(WEEKEND)")
daysLength=${#days[@]}
for i in "${days[@]}"
do 
    echo $i
done

echo $daysLength

for (( i=1; i<8; i++ ));
do
    echo ${days[$i]}
done
