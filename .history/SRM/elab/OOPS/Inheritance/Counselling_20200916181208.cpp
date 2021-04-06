#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    public:
    string name1,name2;
    float marks;
        void getDetails(){
            cin >> name1 >> name2;
        }
        void displayDetails(){
            cout << name1 << endl;
            cout << name2 << endk;
        }
};

class StudentDetails : public Student{

};

int main(){
    StudentDetails sd;

    return 0;
}