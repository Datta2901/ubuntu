#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Bank{
    public :
        string Account_No;
        int account_Balance;
};

class Customer{
    public:
        string name;
        int id;
        
};

class Account:public Customer,public Bank{
    public:
    int getInterest(){
        return (account_Balance *(1 + 12 * 3));
    }
};

int main(){

    return 0;
}