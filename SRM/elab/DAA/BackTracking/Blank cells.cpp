#include <algorithm>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <utility>
#include <vector>
#include <math.h>
#include <queue>
#include <stack>
#include <map>
#include <set>
using namespace std;
int mat[30][30];
int vis[30][30];

bool safe(int x,int y,int n){
    return x>=0 && x<n && y>=0 && y<n;
}
void dfs(int x,int y,int n,int &ans){
    int row[]={-1,0,0,1};
    int col[]={0,-1,1,0};
    vis[x][y]=1;
    if(mat[x][y]==2){
        ans=1;
        return;
    }
    for(int k=0;k<4;k++){
        if(safe(x+row[k],y+col[k],n) && vis[x+row[k]][y+col[k]]==0 && mat[x+row[k]][y+col[k]]!=0 && ans==0){
            dfs(x+row[k],y+col[k],n,ans);
        }
    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j,x,y,ans=0;
	    cin>>n;
	    memset(vis,0,sizeof(vis));
	    memset(mat,0,sizeof(mat));
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
	            cin>>mat[i][j];
	            if(mat[i][j]==1){
	                x=i,y=j;
	            }
	        }
	    }
	    dfs(x,y,n,ans);
	    cout<<ans<<endl;
	    
	}
	return 0;
}