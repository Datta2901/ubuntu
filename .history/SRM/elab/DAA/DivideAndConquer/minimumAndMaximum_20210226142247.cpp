#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getMinMax(vector<int>numbers,int low,int high){
    if(abs(low - ))
    return;
}

int main(){ 
    int size;
    cin >> size;
    vector<int>numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    cout << getMinMax(numbers,size,0,size - 1) << endl;
    return 0;
}