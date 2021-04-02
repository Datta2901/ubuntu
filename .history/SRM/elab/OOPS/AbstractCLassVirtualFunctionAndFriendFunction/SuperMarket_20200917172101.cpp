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
            cout << "Telephone : " << phone << endl
            cout << "Quantity : " << quantity << endl
            cout << "Price : " << price << endl
            cout << "Total Price : " << price * quantity << endl
        }
};

int main(){
    consumer one;
    one.getdata();
    one.display();
    transaction i;
    i.getdata();
    i.display();
    return 0;
}