echo Enter a number
read num

i=0
while [ $i -lt $num ]
do
    j=0
    while [ $j -lt $i ]
    do
        printf "%d "$j
        j=$(($j + 1))
    done
    e
    i=$(($i + 1))
done