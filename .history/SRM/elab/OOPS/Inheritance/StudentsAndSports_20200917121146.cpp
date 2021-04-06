#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class student{
    public:
        int rollNo,mark1,marks2;
        void get(){
            cin >> rollNo >> mark1 >> marks2;
        }
};

class sports:public student{
    public:
        int sportMark;
        void getsm(){
            cin >> sportMark;
        }
        void display(){
            int total = sportMark + rollNo + mark1 + marks2;
            cout << total << endl;
            cout << total/4 << endl;
        }
};

int main(){
    sports obj;
    obj.
    return 0;
}