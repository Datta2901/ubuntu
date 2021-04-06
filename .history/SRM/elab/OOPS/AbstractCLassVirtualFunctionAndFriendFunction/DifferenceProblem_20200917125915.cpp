#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class parent{
    public:
        virtual void difference(int a, int b)= 0;
};

class child:public parent{
    public:
        void difference(int a,int b){
            cout << "Difference=" << a-b << endl;
        }
};

int main(){
    parent *p;
    child c;

    return 0;
}