#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class A{
    public:
        int number;
        void display(){
            cin >> number;
        }
};

class B{
    public:
        int cost;
        void display(){
           cin >> cost; 
        }
};

class C : public  B,public A{
    public:
        int total;
        
};


int main(){

    return 0;
}