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

void PossiblePaths(int i,int j,vector<vector<int> > &grid,string p,vector<int> &Path,vector<vector<int> > &cost,vector<int> &temp,int PathCost,vector<pair<string,int> >& Values);

void isValidPath(int i,int j,vector<vector<int> > &grid,string p,vector<string> &Path,vector<vector<int> > &cost,vector<int> &temp,int PathCost,vector<pair<string,int> > &Values){
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
        Path.push_back(p);
        temp.push_back(PathCost);
        Values.push_back(make_pair(p,PathCost));
        return ;
    }else{
        // PossiblePaths(i,j,grid,p,Path,cost,temp,PathCost,Values);
        grid[i][j] = INT_MIN;
        isValidPath(i+1,j,grid,p+'D',Path,cost,temp,PathCost+cost[i][j],Values);
        isValidPath(i-1,j,grid,p+'U',Path,cost,temp,PathCost+cost[i][j],Values);
        isValidPath(i,j+1,grid,p+'R',Path,cost,temp,PathCost+cost[i][j],Values);
        isValidPath(i,j-1,grid,p+'L',Path,cost,temp,PathCost+cost[i][j],Values);
        grid[i][j]=0;
    }
}




void PrintResults(vector<int> temp,vector<pair<string,int> > Values){
    if(temp.size() == 0){
        cout<<"There is no path from Left Most Corner to Right Most Corner";
    }
    else{
        cout << "-----------------------------------------------------------\n";
        cout << "All possible Paths -----> there cost as follows\n";
        cout << "-----------------------------------------------------------\n";
        string minPath;
        int min = INT_MAX;
        for(auto i :  Values){
            cout << i.first << "\t " << i.second;
            if(min > i.second){
                min = i.second;
                minPath = i.first;
            }
            cout << endl;
        }
        cout << "---------------------------------------------------------\n";
        cout << "Minimum possible cost required is  " << min << "\t" << "( "<< minPath << " )" <<  endl;
        cout << "------------------------------------\n";
    }
}

void GetPath(vector<vector<int> > &grid,vector<vector<int> > &cost){
     //Path vector stores the path from source to destination        
     vector<string>Path;
     vector<int>temp;
     vector<pair<string,int> > Values;
     //temp vector stores the cost of the path
     int PathCost=0;
    //PathCost TO KEEP A TRACK OF THE PathCost FOR RESPECTIVE PATH
    isValidPath(column-1,0,grid,"",Path,cost,temp,PathCost, Values);
    PrintResults(temp,Values);
}

int main(){
    cout << "Enter row and column Pathpectively\n";
    cin >> row >> column;
    vector<vector<int> > grid(row,vector<int>(column,0)),cost(row,vector<int>(column,0));
    cout << "Enter the positions of each cell in the grid\n";
    // Taking grid matrix as input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> grid[i][j];
        } 
    }
    cout << "Enter the PathCost of each cell in the grid\n";
    // Taking cost matrix as input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> cost[i][j];
        }
    }
    cout << "Given positions of grid is :\n";
    PrintGrid(row,column,grid);
    cout << "Given PathCost of each cell is :\n";
    PrintGrid(row,column,cost);
    GetPath(grid,cost);
}
