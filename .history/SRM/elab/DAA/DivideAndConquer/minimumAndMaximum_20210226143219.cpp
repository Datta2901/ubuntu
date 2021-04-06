#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>numbers;

pair<int,int> getMinMax(int low,int high){
    int min1 = numbers[0],min1 = numbers[0],max = numbers[0],max = numbers[0];
    if(abs(low - high) <= 1){
        return make_pair(max(numbers[low],numbers[high]),min(numbers[low],numbers[high]));
    }else{
        (max1,min1) = getMinMax(low,(low + high)/2);
        (max2,min2) = getMinMax(((low + high)/2) + 1,high);
    }
    return make_pair(max(max1,max2),min(min1,min2));
}

int main(){ 
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    pair<int
    // cout << << endl;
    return 0;
}