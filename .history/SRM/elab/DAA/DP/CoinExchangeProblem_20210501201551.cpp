#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
bool comp(pair<int,int> a,pair<int,int> b)
{
  if(a.F>b.F)
    return 0;
  if(a.F<b.F)
    return 1;
  return (a.S<b.S);
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    vector<pair<int,int>> vp;
    for(int i = 0;i<n;i++)
    {
      int x,y;
      cin>>x>>y;
      vp.push_back({x,y});
    }
    sort(all(vp),comp);
    int ans[n],answer = 0;;
    for(int i = 0;i<n;i++)
    {
      ans[i] = vp[i].S;
      int add = 0;
      for(int j = 0;j<i;j++)
        if(vp[j].S<vp[i].S and vp[j].F != vp[i].F)
          add = max(add,ans[j]);
      ans[i] += add;
      answer = max(answer,ans[i]);
    }
    cout<<answer<<"\n";
  }
  return 0;
}