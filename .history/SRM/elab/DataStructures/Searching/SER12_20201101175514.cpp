#include <iostream>
using namespace std;
int main() {
  int a,b,c,i,p;
  int brr[1000];
  cin>>a>>b>>c;
 p=c;int arr[a];
  for(i=0;i<a;i++)
  {
    cin>>arr[i];
  }  
  int j,k,z=0;
  i=0;
  for(k=1;k<=b;k++)
  {c=p;
  for(j=0;j<a;j++)
  {
    
    if(arr[j]==k && c>0)
    {
      z++;
      c--;
      
    }
    if(c==0)
      break;
   
  }}int l=0;
  for(i=0;i<a;i++)
  {if(arr[i]>b && c!=0)
  {
    l++;
  c--;}}int x=1,y=2,q;
  while(x!=y)
  {
    q=0;
    x++;
  }
      q=a-z-l;
        
  printf("%d",q);
  return 0;
}