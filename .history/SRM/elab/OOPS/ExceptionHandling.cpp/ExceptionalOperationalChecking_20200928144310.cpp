#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    double a,b,c;
    char op;
    cin >> a >> op >> b;
    try{
        if(op == '+'|| ||  || ){
            cout << a << op << b << "="<< a + b << endl;
        }else if(op == '-'){
            cout << a << op << b << "="<< a - b << endl;
        }else if(op == '*'){
            cout << a << op << b << "="<< a * b << endl;
        }else if(op =='/'){
            cout << a << op << b << "="<< a / b << endl;
        }else{
            throw(op);
        }
    }
    catch(){
        cout << Operation Error & is not a valid operator
    }

    return 0;
}