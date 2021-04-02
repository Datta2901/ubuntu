

echo Enter a number
read num

declare -a days =("0","Monday(weekday)","Tuesday(weekday)","Wednesday(weekday)","Thursday(weekday)","Friday(weekday)","Saturday(WEEKEND)","Sunday(WEEKEND)")

for i in "$(days[@])"
do 
    echo $i
done