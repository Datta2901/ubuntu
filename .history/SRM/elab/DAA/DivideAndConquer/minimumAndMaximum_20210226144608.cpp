#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>numbers;



pair<int,int> getMinMax(int low,int high){
    int min1 = numbers[0],min2 = numbers[0],max1 = numbers[0],max2 = numbers[0];
    pair<int,int>a(max1,min1),b(max2,min2);

    if(abs(low - high) <= 1){
        return make_pair(max(numbers[low],numbers[high]),min(numbers[low],numbers[high]));
    }else{
    a = getMinMax(low,(low + high)/2);
    b = getMinMax(((low + high) / 2) + 1,high);
    }
    return make_pair(max(a.first,b.first),min(a.second,b.second));
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
    cout << "Minimum element is " <<  answer.second << endl;
    cout << answer.first << " " << << endl;
    return 0;
}