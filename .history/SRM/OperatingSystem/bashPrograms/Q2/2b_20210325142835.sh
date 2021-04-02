

echo Enter a number
read num
count=0
while [ $count -le $num ]
do
    for i in mon tue wed thurs fri sat 
    do
        if [ $i == fri ] || [ $i == sat ]
        then
            echo weekend: $i
        else
            echo weekday: $i
        fi
        coun
    done
done
# for i in "${#days[@]}"
# do 
#     echo $i
# done

