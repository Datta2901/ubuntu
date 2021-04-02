#include<bits/stdc++.h>
using namespace std;
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
vector<int>adj[100];
int nodes;
vector<bool> visited(100);

void initialize() {
    for(int i = 0;i < 10;++i)
        visited[i] = false;
}

vector<int>timer_in(100),timer_out;
int dfs_timer = 0;

void dfs(int v){
    timer_in[v] = dfs_timer++;
    visited[v] = true;
    for(int u : adj[v]){
        if(!visited[u]){
            cout << u  << " ";
            dfs(u);
        }
    }
    cout << endl;
    timer_out[v] = dfs_timer++;
}

int main(){
    initialize();
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
    dfs(1);
    printVector(timer_in,int);
    printVector(timer_out,int);
    return 0;
}