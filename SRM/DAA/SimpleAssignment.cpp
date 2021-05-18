#include<bits/stdc++.h>
using namespace std;

int row,column;


void PrintGrid(int row,int column,vector<vector<int> >grid){
    for(int i = 0; i < row; i++){ 
        for(int j = 0; j < column; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}


void isValidPath(int i,int j,vector<vector<int> > &grid,string p,vector<vector<int> > &cost,int PathCost,vector<pair<string,int> > &Values){
    // we encounter out of bound then simply stop there
    if(i < 0 || i >= row || j < 0 || j >= column){
        return;
    }
    // if we encounter a wall or already visitied cell stop there 
    if(grid[i][j] == 1 || grid[i][j] == INT_MIN){
        return;
    }
    // If we reach top right corner (Destination)
    else if(i == 0 && j == column - 1){  
        Values.push_back(make_pair(p,PathCost));
        return;
    }else{
        grid[i][j] = INT_MIN;
        isValidPath(i+1,j,grid,p+'D',cost,PathCost+cost[i][j],Values);
        isValidPath(i-1,j,grid,p+'U',cost,PathCost+cost[i][j],Values);
        isValidPath(i,j+1,grid,p+'R',cost,PathCost+cost[i][j],Values);
        isValidPath(i,j-1,grid,p+'L',cost,PathCost+cost[i][j],Values);
        grid[i][j] = 0;
    }
}




void PrintResults(vector<pair<string,int> > Values){
    if(Values.size() == 0){
        cout<<"There is no path from Bottom Left Corner to Right Most Corner\n";
    }
    else{
        cout << endl;
        cout << "Total Number of paths possible for the given grid is " << Values.size() << endl;
        cout << endl;
        cout << "-----------------------------------------------------------\n";
        cout << "All possible Paths -----> There cost as follows\n";
        cout << "-----------------------------------------------------------\n";
        string minPath;
        int min = INT_MAX;
        for(auto i :  Values){
            cout << i.first << "\t\t " << i.second;
            if(min > i.second){
                min = i.second;
                minPath = i.first;
            }
            cout << endl;
        }
        cout << "-----------------------------------------------------------\n";
        cout << "Minimum possible cost required is  " << min << "\t" << "( "<< minPath << " )" <<  endl;
        cout << "-----------------------------------------------------------\n";

    }
}

void GetPath(vector<vector<int> > &grid,vector<vector<int> > &cost){

    vector<pair<string,int> > Values;
    int PathCost=0;
    isValidPath(row-1,0,grid,"",cost,PathCost, Values);
    PrintResults(Values);
}

int main(){
    cout << "Enter number of rows and columns respectively\n";
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
    GetPath(grid,cost);
}
