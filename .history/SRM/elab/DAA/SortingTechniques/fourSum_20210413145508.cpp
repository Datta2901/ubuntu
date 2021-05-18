#include <bits/stdc++.h>

using namespace std;
#define ll long long


void getanswer(vector<int>numbe,int k){ 
  int fg=0;    
  sort(numbe.begin(),numbe.end());
  set<vector<int>>store;
  
  for(int a=0;a<numbe.size();a++)
  {
      for(int b=a+1;b<numbe.size();b++)
      {
        int sum=numbe[a]+numbe[b];
        for(int i=b+1,j=numbe.size()-1;i<j && sum<=k;)
        {
            if(sum+numbe[i]+numbe[j]==k) 
            {fg=1;
            vector<int> t={numbe[a],numbe[b],numbe[i],numbe[j]};
            if(store.find(t)==store.end())    {cout<<numbe[a]<<" "<<numbe[b]<<" "<<numbe[i]<<" "<<numbe[j]<<" $";}
             if(numbe[a]==0 && numbe[b]==0 && numbe[i]==1 && numbe[j]==2) {cout<<numbe[a]<<" "<<numbe[b]<<" "<<numbe[i]<<" "<<numbe[j]<<" $";}
            store.insert(t); i++;j--;    
            }
            else if(sum+numbe[i]+numbe[j]<k) {i++;}
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
  vector<int>numbe(m);
  for(int i=0;i<m;i++) cin>>numbe[i];
  getanswer(numbe,k);
  cout<<endl;
}

 return 0;
}