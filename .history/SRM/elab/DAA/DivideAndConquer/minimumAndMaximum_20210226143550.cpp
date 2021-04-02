#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>numbers;

pair<int,int> getMinMax(int low,int high){
    int min1 = INT_MAX,min2 =INT_MIN ,max1 =INT_MIN ,max2 = ;
    if(abs(low - high) <= 1){
        return make_pair(max(numbers[low],numbers[high]),min(numbers[low],numbers[high]));
    }else{
        make_pair(max1,min1) = getMinMax(low,(low + high)/2);
        make_pair(max2,min2) = getMinMax(((low + high)/2) + 1,high);
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
    pair<int,int>answer = getMinMax(0,size - 1);
    cout << answer.first << " " <<  answer.second << endl;
    return 0;
}