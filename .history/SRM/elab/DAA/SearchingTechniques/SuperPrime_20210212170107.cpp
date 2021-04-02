#include<bits/stdc++.h>
using namespace std;
 const int mxN=1e6+5;
int ans[mxN];
vector <int> prime(mxN);
 
void precompute(){
 
  for(int i=0;i<mxN;i++){
    prime[i]=true;
  }
 
  prime[0]=false;
  prime[1]=false;
 
  for(int p=2;p*p<mxN;p++){
    if(prime[p]){
      for(int i=p*p;i<mxN;i+=p){
        prime[i]=false;
      }
    }
  }
 
  ans[0]=0;
  ans[1]=0;
 
  for(int i=2;i<mxN;i++){
    if(prime[i] && prime[i-2]){
      ans[i]=ans[i-1]+1;
    }
    else ans[i]=ans[i-1];
  }
}
 
void solve(){
  int n; cin>>n;
  cout<<ans[n]<<"\n";
}
 
int main(){
  precompute();
  int t; cin>>t;
  while(t--){
    solve();
  }
return 0;
}

