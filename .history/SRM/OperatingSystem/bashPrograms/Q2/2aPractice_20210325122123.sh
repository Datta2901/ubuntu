echo Enter a number
read num

i=0
while [ $i -lt $num ]
do
    j=$($j)
    while [ $j -gt 0 ]
    do
        printf "%d " "$j"
        j=$(($j - 1))
    done
    printf "\n"
    i=$(($i + 1))
done