#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Sports{
    public:
        string roll;
        virtual getdata(){
            cin >> roll;
        }
        virtual display(){
            cout << roll;
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