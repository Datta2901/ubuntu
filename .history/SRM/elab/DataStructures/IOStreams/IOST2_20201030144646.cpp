#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long int number;
    cin >> number;
    cout<< "0123456789" << endl;
    cout<< setw(10) << number << endl;
    cout<< setw(10) << setfill('0')<< number << endl;
    cout<< setw(10) << setfill('.')<< number << endl;

    return 0;
}