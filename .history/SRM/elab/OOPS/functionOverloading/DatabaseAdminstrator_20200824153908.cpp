#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class StudentData{
    public:
        string stuName;
        StudentData(){
            stuName = 
            cout << "NewStuent" << endl;;
        }
        StudentData(string a){
            stuName = a;
            cout << stuName << endl;
        }
};

int main(){
    StudentData myobj();
    string name;
    cin >> name;
    StudentData myobj2(name);
    return 0;
}