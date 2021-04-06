#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Sports{
    public:
        string roll;
        virtual void getdata(){
            cin >> roll;
        }
        virtual void display(){
            cout << roll << endl;
        }
};

class Student:public Sports{
    public:
        string name;
        void getdata(){
            cin >> name;
        }
        void display(){

        }
};

int main(){

    return 0;
}