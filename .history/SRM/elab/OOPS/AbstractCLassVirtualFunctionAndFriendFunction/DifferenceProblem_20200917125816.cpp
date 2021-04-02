#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void difference(int a, int b)= 0;
};

class child:public Parent{
    public:
        void difference(int a,int b){
            cout << ""
        }
};

int main(){

    return 0;
}