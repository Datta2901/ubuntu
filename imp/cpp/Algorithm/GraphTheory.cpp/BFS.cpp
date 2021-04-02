#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
using namespace std;
int nodes = 0;
vector <int> adj[10];

void BFS(int s,vector<bool>&visited,vector<int>&depth,vector<int>&prev){
    queue <int> q;
    q.push(s);
    visited[s] = true;
    prev[s] = -1;
    cout << "Bfs for Given graph or tree is ";
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int u : adj[v]){  
            if(!visited[u]){
                visited[u] = true;
                q.push(u);
                depth[u] = depth[v] + 1;
                prev[u] = v;
                cout << u << " ";                       // node
                // cout << "depth of " << u << " is " << depth[u] << endl; // depth of the node
            }
        }
    }
    cout << endl;
    printVector(depth,int);
}

void FindShortestPath(int s,int e,vector<int>&prev,vector<bool>&visited){
    if (!visited[e]) {
    cout << "No path!" << endl;
    }else{
        vector<int> path;
        for (int v = e; v != -1; v = prev[v])
            path.push_back(v);
            reverse(path.begin(), path.end());
            cout << "Path: ";
        for (int v : path)
            cout << v << " ";
        cout << endl;
    }
}

// you can include FindShortestPath  in DFS

void printAdjacecyList(){
    for(int i = 1;i <= nodes;++i){   
        cout << "Adjacency list of node " << i << ": ";
        if(adj[i].size() == 0){
                cout << endl;
        }
        for(int j = 0;j < adj[i].size();++j){
            if(j == adj[i].size() - 1){
                cout << adj[i][j] << endl;
            }else{
                cout << adj[i][j] << " --> ";
            }
        }
    }
}

int main(){
    int x, y, edges;
    cout << "Enter the nunmber of nodes\n";
    cin >> nodes;       //Number of nodes
    cout << "Enter the number of edges\n";
    cin >> edges;       //Number of edges
    for(int i = 0;i < edges;++i){
        cout << "Enter the nodes having edges\n"; 
        cin >> x >> y;
        adj[x].push_back(y);        //Insert y in adjacency list of x
    }
    printAdjacecyList();
    cout <<"Enter the Node for Dfs " << endl;
    int s;
    cin >> s;
    vector<bool> visited(nodes);
    vector<int> depth(nodes), prev(nodes);
    BFS(s,visited,depth,prev);
    cout << "Enter the two vertices to find shortest path\n";
    int e;
    cin >> e;
    FindShortestPath(s,e,prev,visited);
  
return 0;
}