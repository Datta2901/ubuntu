#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int>powers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        powers.push_back(a);
    }
    int Q;
    cin >> Q;
    while(Q--){
        int power;
        cin >> power;
        int sum = 0,count = 0;
        for(int i = 0; i < size; i++){
            if(power >= powers[i]){
                count++;
                sum 
            }
        }
    }

    return 0;
}