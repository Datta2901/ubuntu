#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Bank{
    public :

};

class Customer{
    public:
        string name;
        int id;
        string Account_No;
        
};

class Account:public Customer,public Bank{
    public:

};

int main(){

    return 0;
}