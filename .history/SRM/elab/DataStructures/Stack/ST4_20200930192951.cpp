#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int>stock,span(size);
    for(int i = 0; i < size; i++){
        int price;
        cin >> price;
        stock.push_back(price);
    }
    stack<int>S;
    S.push(0);
    span[0] = 1;
    for(int  i = 1; i < size; i++){
        while(!S.empty() || S.top() < stock(i)){
            S.pop();
            if(S.empty()){
               span[i] = i + 1;  
            }else{

            }
            S.push(i)
        }
    }

    return 0;
}