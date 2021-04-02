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
            freq[a]++;
        }
        for(auto it = freq.begin(); it != freq.end(); it++){
            data.push_back(make_pair(it->first,it->second),sortinrev);
        }
        sort(data.begin(),data.end());
        for(int i = 0; i < data.size(); i++){
            cout << data[i].first << endl;
            for(int j = 0; j < data[i].second; j++){
                cout << data[i].first << " ";
            }
        }
        cout << endl;
    }






    return 0;
}