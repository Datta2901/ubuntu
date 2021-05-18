#include <bits/stdc++.h>

using namespace std;
#define ll long long


void getanswer(vector<int>,int k){ 
  int fg=0;    
  sort(.begin(),.end());
  set<vector<int>>store;
  
  for(int a=0;a<.size();a++)
  {
      for(int b=a+1;b<.size();b++)
      {
        int sum=[a]+[b];
        for(int i=b+1,j=.size()-1;i<j && sum<=k;)
        {
            if(sum+[i]+[j]==k) 
            {fg=1;
            vector<int> t={[a],[b],[i],[j]};
            if(store.find(t)==store.end())    {cout<<[a]<<" "<<[b]<<" "<<[i]<<" "<<[j]<<" $";}
             if([a]==0 && [b]==0 && [i]==1 && [j]==2) {cout<<[a]<<" "<<[b]<<" "<<[i]<<" "<<[j]<<" $";}
            store.insert(t); i++;j--;    
            }
            else if(sum+[i]+[j]<k) {i++;}
            else j--;
        }
      }
  }
  if(fg==0) cout<<"-1";
}

int main(){
  int t,m,k;
  
 cin>>t;
 while(t--){
  cin>>m>>k;
  vector<int>(m);
  for(int i=0;i<m;i++) cin>>[i];
  getanswer(,k);
  cout<<endl;
}

 return 0;
}