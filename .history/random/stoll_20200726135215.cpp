#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin >> number;
    string str = to_string(number);
    
    cout << stol(str, nullptr, 10) << endl; 
    cout <<  stol(str, nullptr, 10) << "\n";
    cout << stol(str, nullptr, 2) << "\n"; 
    return 0;
}