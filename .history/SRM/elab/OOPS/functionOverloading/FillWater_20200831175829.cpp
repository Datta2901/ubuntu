#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Box{
    public:
        int length;
        Box(){
            length = 0;
        }
        Box(double samevalue){
            length = samevalue;  
        }
        double volume(){
            return pow(length,3);
        }
};

int main(){
    Box mybox1;
    double length;
    cin >> length;
    Box mybox2(length)
    cout << 
    return 0;
}