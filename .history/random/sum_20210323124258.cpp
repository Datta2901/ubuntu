#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string arr[11] = {0,"one","two","three","four","five","six","seven","eight","nine"};
    for(int i = a; i < b; i++){
        if(i > 1){
            cout << arr[i];
        }
    }

    return 0;
}