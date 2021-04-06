#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class consumer{
    public:
    string name;
    virtual getdata(){
        cin >> name;
    }
    virtual display(){
        cout << "Name : "<<  name << endl;
    }
};

class transaction:public consumer{
    public:
        int code,quantity,price;
        string phone;
        void getdata(){
            cin >> code >> phone >> quantity >> price;
        }
        void display(){
            cout << "Code : " << code << endl
            cout << "" << phone << endl
            cout << "" << quantity << endl
            cout << "" << price << endl
            cout << "" << price * quantity << endl
        }
};

int main(){

    return 0;
}