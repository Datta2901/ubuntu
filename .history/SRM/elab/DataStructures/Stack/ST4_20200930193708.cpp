// Stack And Span problem
#include<bits/stdc++.h>
#include<iostream>
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
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
        while(!S.empty() && stock[S.top()] <= stock[i]){
            S.pop();
        }
        if(S.empty()){
            span[i] = i + 1;  
        }else{
            span[i] = i - S.top();S.push(i);
        }    
    }
    printVector(span,int);
    // time complexity is O(n)
    return 0;
}