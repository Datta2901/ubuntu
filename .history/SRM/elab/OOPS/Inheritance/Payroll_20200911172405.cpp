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
            cout << "Name=" << name << endl << "Gender=" << 
        }
};

int main(){

    return 0;
}