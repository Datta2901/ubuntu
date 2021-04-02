#include<bits/stdc++.h>
using namespace std;

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
                    if(frequency[guests[j]] == 1)
                    {
                        arrangement[i][j]++;
                    }
                    arrangement[i][j]++;
                }
                frequency[guests[j]]++;
            }
        }
 
    int inefficiency =INT_MAX;
    int arguments[101][1001]={0};
    for(int i=0;i<=100;i++)
    {
        for(int  j=0;j<=100;j++)
        {
            arguments[i][j]=0;
        }
    }
    for(int i=0;i<n+1;i++)
        arguments[1][i]=arrangement[0][i-1];
    for(int i=2;i<=100;i++){
        arguments[i][1]=0;
    }
    for(int i=2;i<=100;i++){
        for(int j=2;j<=n;j++){
            int minimum = INT_MAX;
            for(int p=1;p<j;p++){
                minimum = min(minimum ,arguments[i-1][p]+arrangement[p][j-1]);
            }
            arguments[i][j]= minimum ;
        }
    }
    for(int i =1; i <=100; i++)
    {
        inefficiency =min(i*cost+arguments[i][n],inefficiency );
    }
    cout<<inefficiency <<"\n";
 
    }
 
}