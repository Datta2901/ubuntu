#include<bits/stdc++.h>
using namespace std;
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin() + 1; it !=vect.end();it++){cout << *it << " ";} cout << endl;
vector<int>adj[100];
int nodes;
vector<bool> visited(100);

void initialize() {
    for(int i = 0;i < 10;++i)
        visited[i] = false;
}

vector<int>timer_in(10),timer_out(10);
int dfs_timer = 0;

void dfs(int v){
    timer_in[v] = dfs_timer;
    visited[v] = true;
    for(int u : adj[v]){
        if(!visited[u]){
            cout << u  << " ";
            dfs(u);
        }
    }
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
    cout << endl;
    cout << "Time intaken by nodes  ";
    printVector(timer_in,int);
    cout << "Time outtaken by nodes ";
    printVector(timer_out,int);
    return 0;
}