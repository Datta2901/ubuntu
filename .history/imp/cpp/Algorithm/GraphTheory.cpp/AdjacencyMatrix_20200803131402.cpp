// Graph Representation requires O(n ^)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nodes = 0;
bool A[20][20];
void initialize(int nodes){
    for(int i = 0;i < nodes;++i)
        for(int j = 0;j < nodes;++j)
            A[i][j] = false;
}

void printAdjacencyMatrix(){
    cout << "The given graph is " << endl;
    for(int i = 0; i < nodes; ++i){
        for(int j = 0; j < nodes; ++j){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int x, y, edges;
    cout << "Enter the nunmber of nodes\n";
    cin >> nodes;       //Number of nodes
    cout << "Enter the number of edges\n";
    cin >> edges;       //Number of edges
    initialize(nodes);       //Since there is no edge initially
    for(int i = 0;i < edges;++i){
        cout << "Enter the nodes having edges\n"; 
        cin >> x >> y;
        A[x -1 ][y - 1] = true;     //Mark the edges from vertex x to vertex y
    }

    printAdjacencyMatrix();
    return 0;
}