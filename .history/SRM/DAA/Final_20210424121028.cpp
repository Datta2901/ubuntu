#include<bits/stdc++.h>
using namespace std;

int count = 0;

void PrintGrid(int row,int column,vector<vector<int> >grid){
    for(int i = 0; i < row; i++){ 
        for(int j = 0; j < column; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}



void GetPath(int row,int col,vector<int> grid,vector<int> cost){
    vector<strin
}



int main(){
    int row,column;
    cout << "Enter row and column respectively\n";
    cin >> row >> column;
    vector<vector<int> > grid(row,vector<int>(column,0)),cost(row,vector<int>(column,0));
    cout << "Enter the positions of each cell in the grid\n";
    // Taking grid matrix as input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> grid[i][j];
        }
    }
    cout << "Enter the Cost of each cell in the grid\n";
    // Taking cost matrix as input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> cost[i][j];
        }
    }
    cout << "Given positions of grid is :\n";
    PrintGrid(row,column,grid);
    cout << "Given Cost of each cell is :\n";
    PrintGrid(row,column,cost);

}