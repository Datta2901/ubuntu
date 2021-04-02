echo Enter a number
read num

i=0
while [ $i -lt $num ]
do
    j=0
    while [ $j -lt $i ]
    do
        echo $j" "
        j=$(($j + 1))
    done
    printf"\n"
    i=$(($i + 1))
done