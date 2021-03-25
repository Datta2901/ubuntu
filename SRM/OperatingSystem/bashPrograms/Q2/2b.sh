#!/bash/bin
count=1
for i in 1 2 3 4 5 6 7
do
    count=$i
    if [ $count -eq 6 -o $count -eq 7 ]
    then
    echo "Day $count : WEEKEND"
    else
    echo "Day $count : WEEKDAY"
    fi
done
