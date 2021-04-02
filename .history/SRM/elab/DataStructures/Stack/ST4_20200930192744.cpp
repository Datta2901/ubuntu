#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int>stock;
    for(int i = 0; i < size; i++){
        int price;
        cin >> price;
        stock.push_back(price);
    }
    stack<int>S;
    S.push(0);
    for(int  i = 1; i < size; i++){
        while(!S.empty())
    }

    return 0;
}