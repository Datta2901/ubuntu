#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<pair<int,int> > data;
        map<int,int> freq;
        for(int i = 0; i < size; i++){
            int a;
            freq[a]++;
        }
        for(auto it = freq.begin(); it != freq.end(); it++){
            data.push_back(make_pair(it->first,it->second));
        }
        sort(data.)
    }






    return 0;
}