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
        bool flag = false;
        for(auto it = freq.begin();it != freq.end(); it++){
            if(it->second == 1){
                if(!flag){
                    size = it->first;
                }
            }
        }
        if(a > size){
            cout << a << " " << size << end
        }
    }
    return 0;
}