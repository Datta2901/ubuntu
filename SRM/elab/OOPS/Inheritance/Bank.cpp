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
        return (round(account_Balance * (1 + 0.12 * 3))-account_Balance);
    }
};

int main(){
    Account obj;
    cin >> obj.name >> obj.id >> obj.Account_No >>obj.account_Balance;
    cout << "Customer Name=" << obj.name << endl;
    cout << "Customer Id=" << obj.id << endl;
    cout << "Account No=" << obj.Account_No << endl;
    cout << "Account Balance=" << obj.account_Balance << endl;
    cout << "Interest=" << obj.getInterest() << endl;
    return 0;
}