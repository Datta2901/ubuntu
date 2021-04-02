#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin >> number;
    string str = to_string(number);
    cout << "Decimal number is " ;
    cout << stol(str, nullptr, 10) << endl; 
    cout << "Hexadecimal number is ";
    cout <<  stol(str, nullptr, 16) << "\n";
    cout << "Decimal number is ";
    cout << stol(str, nullptr, 2) << "\n"; 
    return 0;
}