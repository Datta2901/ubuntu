#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int nodes;
vector<bool> visited(100);

void initialize() {
    for(int i = 0;i < 10;++i)
        visited[i] = false;
}

int main(){
    initialise()
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
    return 0;
}