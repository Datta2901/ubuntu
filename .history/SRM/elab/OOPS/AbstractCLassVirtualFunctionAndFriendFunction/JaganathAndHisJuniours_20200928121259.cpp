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
    p.a = p.a + 1;
}

int main(){
    Point ob1;
    ob

    return 0;
}