#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>numbers;

pair<int,int> getMinMax(int low,int high){
    int min = numbers[0],max = numbers[1];
    if(abs(low - high) <= 1){
        return make_pair(max(numbers[low],numbers[high]),min(numbers[low],numbers[high]));
    }else{
        
    }
    return;
}

int main(){ 
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    cout << << endl;
    return 0;
}