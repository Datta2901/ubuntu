#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int apples,orange,coins;
    while(t--){
        cin >> apples >> orange >> coins;
        int difference = apples - orange;
        difference = (difference < 0) ?  -1 * difference : difference;
        int answer = (difference - coins);
        if(answer >= 0){
             cout << answer << endl;
        }else{
            answer = (coins - difference);
            cout << answer % 2 << endl;
            }
        }
    
    return 0;
}