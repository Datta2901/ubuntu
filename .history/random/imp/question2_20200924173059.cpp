#include<iostream>
#include<bits/stdc++.h>
using namespace std;

enum bix{
    a=1, b, c
};

int main(){
    int x = c;
    int &y = x;
    int &z = x;
    y = b;
    cout << z--;
    cout << x << " ";
    return 0; 
}