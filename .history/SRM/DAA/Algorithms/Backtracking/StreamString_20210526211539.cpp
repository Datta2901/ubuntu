#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){
    string a ;
    cin >> a;
    stringstream ss(a);
    char ch = ',';
    int num1,num2,num3;
    ss >> num1 >> ch >> num2 >> ch >> num3 >> ch;
    
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    return 0;
}