#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Super{
    public:
        virtual void sum()=0;
};

class Sub:public Super{
    public:
        int numbers;
        void read(){
            cin >> numbers;
        }
        void nSum()
};

int main(){

    return 0;
}