#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class parent{
    public:
        virtual float average(int a,int b,int c)= 0;
};

class child:public parent{
    public:
        float average(int a,int b,int c){
            int total = a + b + c;
            return (float)total/3;
        }
};

int main(){
    parent *p;
    child c;
    p = &c;
    int a,b,d;
    cin >> a >> b >> d;
    cout << "Average=" << p->average(a,b,d);
    return 0;
}