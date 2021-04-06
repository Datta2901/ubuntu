#include <iostream>
using namespace std;
int main()
{
  int t,n,min,i,arr[30],temp;
  cin>>t;
  while(t--)
  {
    cin>>n;
    for(i=0;i<n;i++)
      cin>>arr[i];
    min = arr[1]-arr[0];
    for(i=0;i<n-1;i++)
    {
      if((arr[i+1]-arr[i])<min)
        min=arr[i+1]-arr[i];
    }
    for(i=0;i<n-1;i++)
    {
      if((arr[i+1]-arr[i])>min)
      {
        temp=arr[i]+min;
        break;
      }
    }
    cout<<temp<<"\n";
  }
  return 0;
}