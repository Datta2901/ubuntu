#include<iostream>
#include<vector>
using namespace std;
int nodes = 0;
vector <int> adj[10];

void printAdjacecyList(){
    for(int i = 1;i <= nodes;++i){   
        cout << "Adjacency list of node " << i << ": ";
        for(int j = 0;j < adj[i].size();++j){
            if(j == adj[i].size() - 1)
                cout << adj[i][j] << endl;
                
            else
                cout << adj[i][j] << " --> ";
        }
    }
}

int main()
{
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
    
return 0;
}