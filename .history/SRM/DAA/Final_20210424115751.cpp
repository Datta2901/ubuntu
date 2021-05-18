#include<bits/stdc++.h>
using namespace std;


void PrintGrid(int row,int column,vector<vector<int>>){
    for(int i = 0; i < row; i++){
        for(int j = 0; i < column; j++){
            cin >> grid[i][j];
        }
    }
}


int main(){
    int row,column;
    cout << "Enter row and column respectively\n";
    cin >> row >> column;
    vector<vector<int> > grid(row,vector<int>(column,0)),cost(row,vector<int>(column,0));
    cout << "Enter the positions of each cell in the grid\n";
    // Taking grid matrix as input
    for(int i = 0; i < row; i++){
        for(int j = 0; i < column; j++){
            cin >> grid[i][j];
        }
    }
    cout << "Enter the Cost of each cell in the grid\n";
    // Taking cost matrix as input
    for(int i = 0; i < row; i++){
        for(int j = 0; i < column; j++){
            cin >> grid[i][j];
        }
    }
    cout << "Given positions of grid is :\n";

}