#include<bits/stdc++.h>
using namespace std;
int bs(int n,int arr[],int k)
{
    int s=1;
    int m;
    while(s<=n)
    {
    m=(s+n)/2;
    s=m;
    if(arr[s]==k)
    {
        return 1;
    }    }

    return -1;
}

int main()
{
    int n,i;
    cin>>n;
    int m=0;
    int mi;
        int arr[n];
        int c=1;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
   for(i=1;i<=n;i++)
   {
       if(arr[i]>=0)
       {
           mi=min(m,arr[i]);
           m=mi;
       }
       else {continue;}
   }
   for(i=1;i<=n;i++)
   {
   if(bs(n,arr,mi+c)==1)
   {
       c++;
       continue;
   }
   else{cout<<mi+c;
   return 0;}}

    return 0;
}