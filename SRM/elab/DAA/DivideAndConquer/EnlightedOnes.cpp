include <bits/stdc++.h>
using namespace std;
int ok(int mid, int* pos, int K, int N)
{
 int i;
 int pr_ra=pos[0]+2*mid;
 for (i=1;i<N;i++)
 {
  
  if(pr_ra>=pos[i])
   continue;
  else
  {
   pr_ra=pos[i]+2*mid;
   K--;
  }
  if(!K)
   return 0;
 }
 return 1;
}
int main()
{
 int N, K;
 cin>>N>>K;
 int* pos=new int[N];
 int i;
 for(i=0;i<N;i++)
  cin>>pos[i];
 sort(pos,pos+N);
 int hi=10000000;
 int lo=0;
 int mid;
 while(lo<=hi)
 {
  mid=(lo+hi)/2;
  if(ok(mid,pos,K, N))
  {
   if(!ok(mid-1,pos,K, N))
   {
    break;
   }
   else
    hi=mid-1;
  }
  else
  {
   lo=mid+1;
  }
 }
 cout<<mid<<"\n";
 return 0;
}