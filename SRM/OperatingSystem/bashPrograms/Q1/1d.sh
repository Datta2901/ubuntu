#!/bin/bash

echo Enter the any of the word from loan credit personalloan homeloan carloan debit
read string

case $string in
    "loan") echo Tpe of loan;;
    "personal_loan" | "personalloan" | "pl") echo currently no offer for personal loan;;
    "car_loan" | "carlloan") echo currently best offer of 7% is going on;;
    "housing_loan" | "housingloan" | "home") echo currently best offer of 8% is going on;;
    "credit_card" | "creditcard"| "credit") echo contact nearest branch;;
    "debit_card" | "debitcard" | "debit") echo contact nearest branch;;
    "bye") echo see you later;;
    *) echo Sorry i dont understand;;
esac
