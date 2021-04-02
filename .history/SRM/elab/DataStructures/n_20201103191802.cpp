#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    x = 5;
    y = ++x + x--;
    z =++y + --y;
    cout << x << y << endl;

    return 0;
}