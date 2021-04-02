#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const 
int main(){

    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int>adj;
        vector<int> A;
        A.push_back(0);
        for(int i = 1; i <= size; i++){
            A.push_back(i);
        }
        int q;
        cin >> q;
        for(int i = 0; i < q; i++){
            int u,v;
            cin >> u  >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }


    }


    return 0;
}