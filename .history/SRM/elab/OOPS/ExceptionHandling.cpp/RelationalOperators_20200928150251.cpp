#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    try{
        if(a > 0 && b > ){
            cout << a << "<" << b << (a<b) << endl;
            cout << a << "<=" << b << (a<=b) << endl;
            cout << a << "=" << b << (a=b) << endl;
            cout << a << ">" << b << (a>b) << endl;
            cout << a << ">=" << b << (a>=b) << endl;
            cout << a << "!=" << b << (a!= b) << endl;
        }else{
            throw(true);
        } 
    }catch(bool){
        cout << "NO Negative Numbers\n";
    }
    return 0;
}