#include<iostream>
#include<bits/stdc++.h>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
using namespace std;
const int N = 1e5 + 5,logN = 25;
        vector<int> adj[q];


void Dfs(int u,int v){
    
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        for(int i = 0; i < q; i++){
            int u,v;
            cin >> u  >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // for(int i = 0; i < q; i++){
        //     printVect(adj[i],int);
        //     cout << endl;
        // }

    }
    return 0;
}