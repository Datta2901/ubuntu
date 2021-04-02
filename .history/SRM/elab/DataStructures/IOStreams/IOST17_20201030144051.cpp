#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    cout.setf(ios::hex,ios::basefield );
    cout<<"Hexadecimal is:" << hex << number<<"\n";
    cout.setf(ios::oct,ios::basefield );
    cout<<"Octal is:"<< oct << number <<"\n";
    cout.setf(ios::dec,ios::basefield );
    cout<<"Decimal is:"<< dec <<number;
    return 0;
}
 