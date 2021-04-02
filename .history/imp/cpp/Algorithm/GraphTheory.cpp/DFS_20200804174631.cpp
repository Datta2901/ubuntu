#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int nodes = 0;
vector<bool> visited;

void initialize() {
    for(int i = 0;i < 10;++i)
        visited[i] = false;
}

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]){
            cout << u << " ";
            dfs(u);
        }
    }
}

int main(){
    initialize();]
    int 
    cin >> nodes;
    cin >> edges;                       //Number of edges
    for(int i = 0;i < edges;++i) {
        cin >> x >> y;     

        adj[x].push_back(y);                   //Edge from vertex x to vertex y
    //  adj[y].push_back(x);                   //Edge from vertex y to vertex x//Undirected Graph 
    }
    return 0;
}