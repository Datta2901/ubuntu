#include<bits/stdc++.h>
using namespace std;

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
        vect.push_back( make_pair(s,sum));
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
    void findPath(vector<vector<int>> &m, int n,vector<vector<int>> &cost) 
    {
     //res vector stores the path from source to destination        
     vector<string>res;
     vector<int>ktk;
     vector<pair<string,int>>vect;
     //ktk vector stores the cost of the path
     int sum=0;
    //SUM TO KEEP A TRACK OF THE SUM FOR RESPECTIVE PATH
     find_path(n-1,0,m,"",n,res,cost,ktk,sum,vect);
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
     cout<<i.first<<"\t\t"<<i.second;
 }
     }
    }
int main()
{
 //ENTER THE LENGTH OF THE MATRIX
 int n;
 cin>>n;
 //ENTER THE 1,0 MATRIX 
 vector<vector<int>>m(n,vector<int>(n,0));
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         cin>>m[i][j];
     }
 }
 //ENTER THE COST OF 1,0 MATRIX
 vector<vector<int>>cost(n,vector<int>(n,0));
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         cin>>cost[i][j];
     }
 }
 findPath(m,n,cost);

 return 0;
}