#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int FIND(int,int){

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        FIND(a,b);
        a = a % 3;
        b = b % 3;
        if(abs(a - b) == 1){
            cout << yes << endl;
        }
    }
    return 0;
}