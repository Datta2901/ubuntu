#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>
T sum(T a,T b){
    return (a + b);
}

int main(){
    float a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << sum(a,b) << endl;
    cout << sum(c,d) << endl;
    cout << sum(a,c) << endl;


    return 0;
}