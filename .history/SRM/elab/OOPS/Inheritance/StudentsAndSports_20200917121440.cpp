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

    void display(){
            cout << rollNo << endl;
            int total = sportMark + mark1 + marks2;
            cout << total << endl;
            cout << total/3 << endl;
        }

}

int main(){
    sports obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}