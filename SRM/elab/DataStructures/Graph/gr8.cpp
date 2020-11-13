#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int>adj[10];
    for(int i = 0; i < size; i++){
        int u,v;
        cin >> u >> v;
        adj[u].insert(adj[u].begin(),v);
        adj[v].insert(adj[v].begin(),u);
    }
    for(int i = 0; i < size; i++){
        cout << "Adjacency list of vertex "<< i << endl;
        for(auto j : adj[i]){
            cout << j <<" -> "; 
        }
        cout << endl;
    }
    return 0;
}