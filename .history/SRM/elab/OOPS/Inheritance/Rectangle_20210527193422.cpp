#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Area{
    public:
        int getArea( int length,int berth){
            return length * berth;
        }
};

class Perimeter{
    public:
        ;
        int getPerimeter(int length,int berth){
            return (2 *(length + berth));
        }
};

class Rectangle :public Area,public Perimeter{
    public:
        int length,berth;
};

int main(){
    Rectangle rt;
    int a,b;
    cin >> a >> b;
    rt.getArea(a,b);
    rt.getPerimeter(a,b);
    return 0;
}