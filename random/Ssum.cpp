#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(i %  5 == 0 || i % 7 == 0){
                continue;
            }else{
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}