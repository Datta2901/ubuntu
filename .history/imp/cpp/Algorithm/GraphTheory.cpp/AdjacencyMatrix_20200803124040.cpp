#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool A[20][20];

void initialize(int nodes){
    for(int i = 0;i < nodes;++i)
        for(int j = 0;j < size;++j)
            A[i][j] = false;
}

void printAdjacencyMatrix(bool A[][nodes]){
    cout << "The given graph is ";
    for(int i = 0;i < size;++i){
        for(int j = 0;j < size;++j){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    int x, y, nodes, edges;
    cin >> nodes;       //Number of nodes
    cin >> edges;       //Number of edges
    initialize(nodes);       //Since there is no edge initially
    for(int i = 0;i < edges;++i){
        cin >> x >> y;
        A[x][y] = true;     //Mark the edges from vertex x to vertex y
    }


    

    return 0;
}