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

googly::isgoogly(){
    if(number % 2 != 0){

    }
}


int main(){

    return 0;
}