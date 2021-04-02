#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int>adj[10];
    for(int i = 0; i < size; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 0; i < size; i++){
        cout << "Adjacency list of ver"
        for(auto j : adj[i]){

        }
    }
    return 0;
}