#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Fraction{
    public:
        int a,b,c,d;
        void read(){
            cin >> a >> b >> c >> d;
        }
        void operator +(Fraction &){
            a = a * c;
            b = b * d;
        }
        void print(){
            cout << a << "/"<< b << endl;
        }
};

int main(){
    Fraction obj;
    obj.read();
    obj.

    return 0;
}