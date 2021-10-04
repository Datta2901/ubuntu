#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// using xor property
// we can make equal elements possible if and only if target is present in the 

int main(){
    int t;
    cin >> t;
    while(t--){
        map<int,int>fre;
        int size,target;
        cin >> size >> target;
        int a,maximum = INT_MIN,answer = 0,value;
        for(int i = 0; i < size; i++){
            cin >> a;
            fre[a]++;
            maximum = max(maximum,fre[a]);
        }

        for(auto it : fre){
            int xorValue = target ^ it.first;
            if(maximum < fre[xorValue] + 1){
                if(xorValue == value){
                    answer++;
                    value = xorValue;
                }else{
                    answer = 0;
                    answer++;
                    value = xorValue;
                }
                maximum = fre[xorValue] + 1;
            }
        }
        cout <<  maximum << " " << answer << endl;
    }
    return 0;
}