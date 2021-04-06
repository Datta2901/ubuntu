#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size,a;
        cin >> size;
        map<int,int> freq;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            freq[a]++;
        }
        for(auto it = freq.begin();it != freq.end(); it++){
            a = it->second;
            if(it->second % 2 != 0){
                size = it->first;
                a = it->second
            }
        }
       cout << size << " 1" << endl;
    }
    return 0;
}