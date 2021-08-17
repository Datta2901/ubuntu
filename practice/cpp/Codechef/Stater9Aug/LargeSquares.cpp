#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,l;
        cin >> n >> l;
        cout << int(sqrt(n)) * l<< endl;
    }
    return 0;
}