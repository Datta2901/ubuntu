#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool sortinrev(const pair<int,int> &a,const pair<int,int> &b) { 
       return (a.first > b.first); 
}

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
            cin >> a;
            freq[a]++;
        }
        for(auto it = freq.begin(); it != freq.end(); it++){
            data.push_back(make_pair(it->second,it->first));
        }
        sort(data.begin(),data.end(),sortinrev);

        for(int i = 0 ; i < data.size(); i++){
            for(int j = 1; j <= data[i].first; j++){
                cout << data[i].second << " ";
            }
        }
        cout << endl;
    }
    return 0;
}