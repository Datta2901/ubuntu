#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int GetDigits(int num){
    int count = 0;
    while(num > 0){
        count++;
        num /= 10;
    }
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
    }

    
    return 0;
}