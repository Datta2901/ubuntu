#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Sports{
    public:
        string roll;
        virtual getdata(){
            cin >> roll;
        }
        virtual void display(){
            cout << roll << endl;
        }
};

class Student:public Sports{
    public:
        void getdata(){

        }
        void display{

        }
};

int main(){

    return 0;
}