#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template <class T>
T GetMax(T a,T b, T c){
    return (max(max(a,b),c));
}

int main(){
    long a,b,c;
    cin >> a >> b >> c;
    cout << GetMax(a,b,c) << endl;
    return 0;
}