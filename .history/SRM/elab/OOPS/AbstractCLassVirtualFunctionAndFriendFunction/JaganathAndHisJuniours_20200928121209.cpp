#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Point{
    public:
        int a;
        Point(int x){
            a = x;
        }
        void show(){
            cout << a << endl;
        }
        friend void operator++(Point &p);
};

void operator++(Point &p){
    p
}

int main(){

    return 0;
}