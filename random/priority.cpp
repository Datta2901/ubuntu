#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    map<int,int>fre;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        fre[a]++;
    }

    int min = INT_MAX,max = INT_MIN;
    int minIndex = 0,maxIndex = 0,count = 0;
    for(auto i : fre){
        if(min > i.second){
            min = i.second;
            minIndex = count;
        }if(max < i.second){
            max = i.second; 
            maxIndex = count;
        }
        count++;
    }

    if(minIndex < maxIndex){
        cout << max - min << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}