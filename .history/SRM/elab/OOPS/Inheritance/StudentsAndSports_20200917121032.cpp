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
            
        }
};

int main(){
    return 0;
}