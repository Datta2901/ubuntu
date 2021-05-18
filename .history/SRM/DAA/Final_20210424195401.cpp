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



void isaValidCell(int i,int j,vector<vector<int>> &grid,string p,vector<int> &Path,vector<vector<int>> &cost,vector<int> &temp,int Cost,vector<pair<string,int>> &Values){
    // we encounter out of bound then simply stop there
    if(i < 0 || i >= row || j < 0 || j >= column){
        return;
    }
    // if we encounter a wall or already visitied cell stop there 
    if(grid[i][j] == 1 || grid[i][j] == INT_MIN){
        return;
    }
    // If we reach top right corner (Destination)
    else if(i == 0 && j == n - 1){
        Path.push_back(p);
        temp.push_back(sum);
        Values.push_back(make_pair(p,sum));
        return ;
    }else{
        grid[i][j] = INT_MIN;
        isValid(i+1,j,grid,p+'D',Path,cost,temp,sum+cost[i][j],Values);
        isValid(i-1,j,grid,p+'U',Path,cost,temp,sum+cost[i][j],Values);
        isValid(i,j+1,grid,p+'R',Path,cost,temp,sum+cost[i][j],Values);
        isValid(i,j-1,grid,p+'L',Path,cost,temp,sum+cost[i][j],Values);
        grid[i][j]=0;
    }
}

void GetPath(vector<vector<int>> &m, int n,vector<vector<int>> &cost) 
    {
     //res vector stores the path from source to destination        
     vector<string>res;
     vector<int>ktk;
     vector<pair<string,int>>vect;
     //ktk vector stores the cost of the path
     int sum=0;
    //SUM TO KEEP A TRACK OF THE SUM FOR RESPECTIVE PATH
     isValid(n-1,0,m,"",n,res,cost,ktk,sum,vect);
     if(ktk.size()==0)
     {
     cout<<"NO PATH";
     }
     else
     {
     sort(ktk.begin(),ktk.end());
     cout<<ktk[0];
     
     
 for (auto i : vect )
 {
     cout<<i.first<<" "<<i.second;
 }
     }
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