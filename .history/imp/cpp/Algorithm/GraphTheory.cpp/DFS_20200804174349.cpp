#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<int>visited(100);

int nodes = 0;

vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}
int main(){
m
    cin >> nodes;


    return 0;
}