#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class googly{
    public:
        int number;
        void getballnumber(){
            cin  >> number;
        }
        friend int isgoogly();
};

int  isgoogly(class googly ){
    if(.number % 2 != 0){

    }
};


int main(){
    googly e1;
    e1.getballnumber();
    isgoogly(e1);
    return 0;
}