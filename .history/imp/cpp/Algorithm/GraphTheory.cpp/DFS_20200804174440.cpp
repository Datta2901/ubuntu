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
        if (!visited[u])
            dfs(u);
    }
}

int main(){
    intial
    cin >> nodes;


    return 0;
}