#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string arr[11] = {0,"one","two","three","four","five","six","seven","eight","nine"};
    for(int i = a; i < b; i++){
        if(i > 10){
            cout << arr[i];
        }else if(i % 2 == 0){
            cout << "even"
        }
    }

    return 0;
}