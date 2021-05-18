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



void isaValidCell(int i,int j,vector<vector<int>> &grid,string p,vector<int> &Path,vector<vector<int>> &cost,vector<int> &temp,int Cost,vector<pair<string,int>> &){
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
        .push_back(make_pair(p,sum));
        return ;
    }else{
        grid[i][j] = INT_MIN;
        isaValidCell(i + 1, j , grid,)
    }
}

 void find_path(int i,int j,vector<vector<int>> &grid,string p,int n,vector<string>&Path,vector<vector<int>> &cost,vector<int> &temp,int sum,     vector<pair<string,int>> &)
   {   //BASE CASE TO CHECK IF THE PATH GO'S OUT OF BOUND OR TO CHECK IF IT IS VISITED   OR IF THERE IS A WALL
       if(i<0 || j<0 || i>=n || j>=n )
       {
           return;
       }
       if( grid[i][j]==1 || grid[i][j]==-1)
       return;
       //ANOTHER BASE  CONDITION IF REACHES THE DESTINATION WE SIMPLY PUSH THE COST OD THE PATH INTO THE VECTOR
       else if(i==0 && j==n-1)
       {
        Path.push_back(p);
        temp.push_back(sum);
        .push_back(make_pair(p,sum));
        return ;
       }
       //TRAVERSING IN ALL POSSIBLE PATH USING 4 RECURSIVE FUNCTIONS
       else
       {
           grid[i][j]=-1;
           find_path(i+1,j,grid,p+'D',n,Path,cost,temp,sum+cost[i][j],);
           find_path(i-1,j,grid,p+'U',n,Path,cost,temp,sum+cost[i][j],);
           find_path(i,j+1,grid,p+'R',n,Path,cost,temp,sum+cost[i][j],);
           find_path(i,j-1,grid,p+'L',n,Path,cost,temp,sum+cost[i][j],);
           grid[i][j]=0;
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