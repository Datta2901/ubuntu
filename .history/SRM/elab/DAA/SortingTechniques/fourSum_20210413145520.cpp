#include <bits/stdc++.h>

using namespace std;
#define ll long long


void getanswer(vector<int>numbers,int k){ 
  int fg=0;    
  sort(numbers.begin(),numbers.end());
  set<vector<int>>store;
  
  for(int a=0;a<numbers.size();a++){
      for(int b=a+1;b<numbers.size();b++){
        int sum=numbers[a]+numbers[b];
        for(int i=b+1,j=numbers.size()-1;i<j && sum<=k;){
            if(sum+numbers[i]+numbers[j]==k) 
            {
              fg=1;
            vector<int> t={numbers[a],numbers[b],numbers[i],numbers[j]};
            if(store.find(t)==store.end())    {cout<<numbers[a]<<" "<<numbers[b]<<" "<<numbers[i]<<" "<<numbers[j]<<" $";}
             if(numbers[a]==0 && numbers[b]==0 && numbers[i]==1 && numbers[j]==2) {cout<<numbers[a]<<" "<<numbers[b]<<" "<<numbers[i]<<" "<<numbers[j]<<" $";}
            store.insert(t); i++;j--;    
            }
            else if(sum+numbers[i]+numbers[j]<k) {i++;}
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
  vector<int>numbers(m);
  for(int i=0;i<m;i++) cin>>numbers[i];
  getanswer(numbers,k);
  cout<<endl;
}

 return 0;
}