#!/bin/bash

hour=$(date | cut -c12-13)

if [ "$hour" -ge 0 -a "$hour" -le 11 ]
then
    echo good morning
elif [ "$hour" -ge 0 -a "$hour" -le 17 ]
then
    echo good afternoon
else
    echo good evening
fi
