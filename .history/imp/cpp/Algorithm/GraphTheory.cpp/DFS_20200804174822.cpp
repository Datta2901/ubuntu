#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int nodes = 0;
vector<bool> visited(100);

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
    initialize();
    int x,y,edges;
    cin >> nodes;
    cin >> edges;                       //Number of edges
    for(int i = 0;i < edges;++i) {
        cin >> x >> y;     
        adj[x].push_back(y);                   //Edge from vertex x to vertex y
    //  adj[y].push_back(x);                   //Edge from vertex y to vertex x//Undirected Graph 
    }
    dfs(1);
    return 0;
}