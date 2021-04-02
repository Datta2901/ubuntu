#!/bin/bash

echo -n "Enter the any of the word from loan credit personalloan homeloan carloan debit"
read string

case string in
    "loan") echo "Tpe of lone ? "
    "personal_loan" || "personal") echo currently no offer for personal loan;;
        "car_loan") echo currently best offer of 7% is going on;;
        "housing_loan") echo currently best offer of 8% is going on;;
        "credit_card") echo contact nearest branch;;
        "debit_card") echo contact nearest branch;;
        "bye") echo see you later;;
        *) echo sorry i dont understand;;