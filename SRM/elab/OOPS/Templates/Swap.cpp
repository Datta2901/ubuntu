#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>

void Swap(T &x,T &y){
    T z = x;
    x = y ;
    y = z; 
}

int main(){
    string a,b;
    cin >> a >> b;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}