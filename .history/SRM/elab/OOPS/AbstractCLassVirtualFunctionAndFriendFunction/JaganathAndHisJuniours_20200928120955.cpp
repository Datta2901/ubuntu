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
        friend void operator++()
};

int main(){

    return 0;
}