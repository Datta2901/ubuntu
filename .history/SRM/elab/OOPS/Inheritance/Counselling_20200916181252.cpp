#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    public:
    string name1,name2;
    float marks;
        void getDetails(){
            cin >> name1 >> name2 >> marks;
        }
        void displayDetails(){
            cout << name1 << endl;
            cout << name2 << endl;
            cout << marks << endl;
        }
};

class StudentDetails : public Student{

};

int main(){
    StudentDetails sd;
    sd.getDetails();
    sd.
    return 0;
}