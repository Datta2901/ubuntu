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
        cout << name << endl;
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
            cout << ""
        }
};

int main(){

    return 0;
}