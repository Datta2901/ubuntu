#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>
T Large(T n1,T n2){
    T l = (n1 > n2) ? n1 : n2;
    return l;
}


int main(){
    for(int i = 0; i < 2; i++){
        float a,b;
        cin >> a >> b ;
        cout << Large(a,b) << endl;
    }
    return 0;
}