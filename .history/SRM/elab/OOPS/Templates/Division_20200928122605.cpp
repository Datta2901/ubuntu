#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>
T displayresult(T a , T b){
    T c = a / b;
    return c;
}

int main(){
     a,b;
    cin >> a >> b;
    cout << a << endl;
    cout << b << endl;
    cout << displayresult(a,b) << endl;
    return 0;
}