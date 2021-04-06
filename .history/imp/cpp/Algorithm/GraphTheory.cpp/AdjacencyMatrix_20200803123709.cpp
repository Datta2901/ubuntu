#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 20 

bool A[20][20];

void initialize()
{
    for(int i = 0;i < size;++i)
        for(int j = 0;j < size;++j)
            A[i][j] = false;
}

void printAdjacencyMatrix(bool A[][size]){
    for(int i = 0;i < size;++i)
        for(int j = 0;j < size;++j)
            cout << A[i][j];
}

int main(){
    int x, y, nodes, edges;
    initialize();       //Since there is no edge initially
    cin >> nodes;       //Number of nodes
    cin >> edges;       //Number of edges
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y;
        A[x][y] = true;     //Mark the edges from vertex x to vertex y
    }


    

    return 0;
}