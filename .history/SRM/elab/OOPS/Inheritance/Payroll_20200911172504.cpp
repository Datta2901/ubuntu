#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class SingleInheritance{
    public:
        string name,gender;
        int salary,age;
        void getDetails(){
            cin >> name >> gender >> age >> salary;
        }
};

class inheritedclass : public SingleInheritance{
    public:
        void display(){
            cout << "Name=" << name << endl << "Gender=" << gender << endl << "Age=" << age << "Salary=" << salary << endl;
        }
};

int main(){
    inheritedclass 
    return 0;
}