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
            cout << "Student Roll no is: " <<  roll << endl;
        }
};

class Student:public Sports{
    public:
        string name;
        void getdata(){
            cin >> name;
        }
        void display(){
            cout << "Student Name is: " << name << endl;;
        }
};

int main(){
    Sports obj;
    obj.getdata();
    Student oo;
    oo.getdata();
    oo.display();
    obj.display();
    return 0;
}