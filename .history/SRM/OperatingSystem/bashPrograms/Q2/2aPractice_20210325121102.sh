echo Enter a number
read num

i=0
while [ $i -lt $num ]
do
    j=$i
    while [ $j -gt $i ]
    do
        printf "%d "$j
    done
    i=$(($i + 1))
done