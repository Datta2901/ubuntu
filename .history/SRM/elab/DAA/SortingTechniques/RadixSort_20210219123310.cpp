#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int GetDigits(int num){
    int count = 0;
    while(num > 0){
        count++;
        num /= 10;
    }
    return num;
}
int main(){
    int size;
    cin >> size;
    vector<int> numbers;
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
        if(max < a){
            max = a;
        }
        for(int i = 1; i < GetDigits(max); i++){
            vector<int>temp;
            
        }
    }

    
    return 0;
}