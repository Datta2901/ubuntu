#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>
T Large(T n1,T b){
    T l = (n1 > b) ? n1 : b;
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