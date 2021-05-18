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



void isaValidCell(int i,int j,vector<int> grid,vector<int> cost,vector<int>Path,int Cost,){
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

    }else{
        grid[i][j] = INT_MIN;
        isaValidCell(i + 1,)
    }
}

 void find_path(int i,int j,vector<vector<int>> &m,string s,int n,vector<string>&res,vector<vector<int>> &cost,vector<int> &ktk,int sum,     vector<pair<string,int>> &vect)
   {   //BASE CASE TO CHECK IF THE PATH GO'S OUT OF BOUND OR TO CHECK IF IT IS VISITED   OR IF THERE IS A WALL
       if(i<0 || j<0 || i>=n || j>=n )
       {
           return;
       }
       if( m[i][j]==1 || m[i][j]==-1)
       return;
       //ANOTHER BASE  CONDITION IF REACHES THE DESTINATION WE SIMPLY PUSH THE COST OD THE PATH INTO THE VECTOR
       else if(i==0 && j==n-1)
       {
        res.push_back(s);
        ktk.push_back(sum);
        vect.push_back(make_pair(s,sum));
        return ;
       }
       //TRAVERSING IN ALL POSSIBLE PATH USING 4 RECURSIVE FUNCTIONS
       else
       {
           m[i][j]=-1;
           find_path(i+1,j,m,s+'D',n,res,cost,ktk,sum+cost[i][j],vect);
           find_path(i-1,j,m,s+'U',n,res,cost,ktk,sum+cost[i][j],vect);
           find_path(i,j+1,m,s+'R',n,res,cost,ktk,sum+cost[i][j],vect);
           find_path(i,j-1,m,s+'L',n,res,cost,ktk,sum+cost[i][j],vect);
           m[i][j]=0;
       }
   }


int main(){
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