#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Area{
    public:
        int length,berth;
        int getArea(){
            return length * berth;
        }
};

class Perimeter{
    public:
        int length,berth;
        int getPerimeter{
            return 2 *(length + berth);
        }
};

class Rectangle :public Area,public Perimeter{

}

int main(){


    return 0;
}