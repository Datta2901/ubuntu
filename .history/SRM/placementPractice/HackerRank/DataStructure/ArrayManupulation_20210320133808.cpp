#include<bits/stdc++.h>
using namespace std;


int main() {
    long int  ,K,p,q,sum,i,j,max=0,x=0;
    cin>> >>K;
    long int *a=new long int[ +1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<= ) a[q+1]-=sum;
    }

    for(i=1;i<= ;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}