#include<bits/stdc++.h>
using namespace std;


int main() {
    long int  size ,queries,max=0,answer=0;
    cin>> size >>queries;
    long int *a=new long int[ size +1]();

    for(int i=0;i<queries;i++){
        int a,b,sum;
        cin >> a >> b >> sum;
        a[]+=sum;
        if((q+1)<= size ) a[q+1]-=sum;
    }

    for(i=1;i<= size ;i++)
    {
       answer=answer+a[i];
       if(max<answer) max=answer;

    }

    cout<<max;
    return 0;
}