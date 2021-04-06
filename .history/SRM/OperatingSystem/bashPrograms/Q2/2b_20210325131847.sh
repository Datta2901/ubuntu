

# echo Enter a number
# read num

# declare -a days=("0","Monday(weekday)","Tuesday(weekday)","Wednesday(weekday)","Thursday(weekday)","Friday(weekday)","Saturday(WEEKEND)","Sunday(WEEKEND)")
# daysLength =${#days[@]}
# for i in "${days[@]}"
# do 
#     echo $i
# done

# for ((i=1; i<$(daysLength + 1); i++))
# do 
#     echo ${arr[i]}
# done


#!/bin/bash
## declare an array variable
declare -a array=("one" "two" "three")

# get length of an array
arraylength=${#array[@]}

# use for loop to read all values and indexes
for (( i=1; i<${arraylength}+1; i++ ));
do

done
