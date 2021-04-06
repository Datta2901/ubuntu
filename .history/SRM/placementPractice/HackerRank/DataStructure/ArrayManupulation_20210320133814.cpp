#include<bits/stdc++.h>
using namespace std;


int main() {
    long int  size ,qu,p,q,sum,i,j,max=0,x=0;
    cin>> size >>qu;
    long int *a=new long int[ size +1]();

    for(i=0;i<qu;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<= size ) a[q+1]-=sum;
    }

    for(i=1;i<= size ;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}