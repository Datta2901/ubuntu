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
    cout << "The given graph is ";
    for(int i = 0;i < nodes;++i){
        for(int j = 0;j < nodes;++j){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    int x, y, edges;
    cin >> nodes;       //Number of nodes
    cin >> edges;       //Number of edges
    initialize(nodes);       //Since there is no edge initially
    for(int i = 0;i < edges;++i){
        cin >> x >> y;
        A[x][y] = true;     //Mark the edges from vertex x to vertex y
    }

    printAdjacencyMatrix();
    return 0;
}