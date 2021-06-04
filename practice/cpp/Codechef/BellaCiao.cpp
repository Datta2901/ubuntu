#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int Days,interval,initial,increase;
        cin >> Days >> interval >> initial >> increase;
        int q = Days / interval;
        cout << initial*Days +((q * (q + 1))/2) *(increase)  << endl;
    }
    return 0;
}