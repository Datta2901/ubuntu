#include<bits/stdc++.h>
using namespace std;
#define  long long int 
 
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int n,cost;
        cin >> n >> cost;
        int guests[n+1];
        map<int ,int>frequency;
        for(int i=0;i<n;i++)
            cin>>guests[i];
        int arrangement[n+1][n+1]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                arrangement[i][j]=0;
        }
        for(int i = 0;i < n; i++){
            frequency.clear();
            for(int j= i;j < n; j++){
                if(j == 0){
                    arrangement[i][j] = 0;
                }else{
                    arrangement[i][j] = arrangement[i][j-1];
                }
                if(frequency.count(guests[j])){
                    if(frequency[guests[j]]==1)
                    {
                         arrangement[i][j]++;
                    }
                    arrangement[i][j]++;
                }
                frequency[guests[j]]++;
            }
 
        }
 
     ans=1e18;
     table=100;
     dp[101][1001]={0};
    for(int i=0;i<=table;i++)
    {
        for(int  j=0;j<=table;j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0;i<n+1;i++)
        dp[1][i]=arrangement[0][i-1];
    for(int i=2;i<=table;i++)
    {
        dp[i][1]=0;
    }
    for(int i=2;i<=table;i++)
    {
        for(int j=2;j<=n;j++)
        {
             best=1e18;
            for(int p=1;p<j;p++)
            {
                best=min(best,dp[i-1][p]+arrangement[p][j-1]);
            }
            dp[i][j]=best;
        }
    }
    for(table =1;table<=100;table++)
    {
        ans=min(table*cost+dp[table][n],ans);
    }
    cout<<ans<<"\n";
 
    }
 
}