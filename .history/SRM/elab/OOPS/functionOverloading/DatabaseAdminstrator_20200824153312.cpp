#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class StudentData{
    string stuName;
    StudentData(){
       stuName = "NewStuent";
    }
    StudentData(string a){
       stuName = a;
    }
};

int main(){
    StudentData myobj(),myobj2();
    string name;
    cin >> name;
    myobj() << endl;
    

    return 0;
}