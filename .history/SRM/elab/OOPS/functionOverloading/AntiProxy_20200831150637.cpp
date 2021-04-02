#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        Student(){
            name = "No Attendence";
        }
        Student(string a){
            name = a;
        }
        void Display(){
            cout << "Hello " << name << endl;
        }

};

int main(){
    Student stdabs;
    stdabs.Display();
    string a;
    cin >> a;
    Student Stdpst;
    stdpst(a).Display();


    return 0;
}