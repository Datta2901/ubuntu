#include <bits/stdc++.h>

using namespace std;
#define ll long long


void getanswer(vector<int>v,int k){ 
  int fg=0;    
  sort(v.begin(),v.end());
  set<vector<int>>st;
  
  for(int a=0;a<v.size();a++)
  {
      for(int b=a+1;b<v.size();b++)
      {
        int sum=v[a]+v[b];
        for(int i=b+1,j=v.size()-1;i<j && sum<=k;)
        {
            if(sum+v[i]+v[j]==k) 
            {fg=1;
            vector<int> t={v[a],v[b],v[i],v[j]};
            if(st.find(t)==st.end())    {cout<<v[a]<<" "<<v[b]<<" "<<v[i]<<" "<<v[j]<<" $";}
             if(v[a]==0 && v[b]==0 && v[i]==1 && v[j]==2) {cout<<v[a]<<" "<<v[b]<<" "<<v[i]<<" "<<v[j]<<" $";}
            st.insert(t); i++;j--;    
            }
            else if(sum+v[i]+v[j]<k) {i++;}
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
  vector<int>v(m);
  for(int i=0;i<m;i++) cin>>v[i];
  getanswer(v,k);
  cout<<endl;
}

 return 0;
}