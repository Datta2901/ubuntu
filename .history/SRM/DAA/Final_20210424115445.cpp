#include<bits/stdc++.h>
using namespace std;


int main(){
    int row,column;
    cout << "Enter row and column respectively\n";
    cin >> row >> column;
     vector<vector<int>> grid(row,vector<int>(,0)),cost[row][column];
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

}