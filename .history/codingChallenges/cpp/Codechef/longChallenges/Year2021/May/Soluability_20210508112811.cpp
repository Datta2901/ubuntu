#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int temp,a,b;
        cin >> temp >> a >> b;
        cout << (a + (100 - temp)) * b * 10 << endl; 
    }
    return 0;
}