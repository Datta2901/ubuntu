read string
case "$string" in
        "loan") echo type of loan;;
        "personal_loan") echo currently no offer for personal loan;;
        "car_loan") echo currently best offer of 7% is going on;;
        "housing_loan") echo currently best offer of 8% is going on;;
        "credit_card") echo contact nearest branch;;
        "debit_card") echo contact nearest branch;;
        "bye") echo see you later;;
        *) echo sorry i dont understand;;
esac
~