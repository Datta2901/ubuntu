#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> adj[N];
int height[N];

int main(){
    
    int n , m; // nodes,edges
    int u,v;
    cin >> n >> m; 
    while(m--){
        cin >> u >> v;
        adj[u].push_back(v);
    }

    memset(height,-1,sizeof(height));

    int source = 1;
    queue<int> neighbours;
    neighbours.push(source);
    height[source] = 0;

    while(!neighbours.empty()){
        u = neighbours.front();
        neighbours.pop();
        for(auto v : adj[u]){
            if(height[v] != -1){
                height[v] = height[u] + 1;
                neighbours.push(v);
            }
        }
    }
    return 0;
}