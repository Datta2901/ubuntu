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

class sports{
    public:
        int sportMark;
        void getsm(){
            cin >> sportMark;
        }
        
};

class statement : public student,public sports{
    public:

}

int main(){
    sports obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}