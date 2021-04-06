#include <stdio.h>

int main()
{
 int array123 [100];
    long int N,i;
    long long int prod;
    scanf("%li",&N);
    long int [N];
    long int big,bigger,biggest,temp;
    for(i=0;i<N;i++)
    {
     scanf("%li",&[i]);
    }
    printf("-1\n-1\n");
    big=[0];
    bigger=[1];
    if([0]>bigger)
    {
     bigger=[0];
     big=[1];
    }
    biggest=[2];
    if(biggest<bigger && biggest>=big)
    {
     temp=bigger;
     bigger=biggest;
     biggest=temp;
    }
    if(biggest<big)
    {
     temp=big;
     big=biggest;
     biggest=bigger;
     bigger=temp;
    }
    prod=big*bigger*biggest;
    printf("%lli\n",prod);
    for(i=3;i<N;i++)
    {
  if([i]>biggest)
  {
   big=bigger;
   bigger=biggest;
   biggest=[i];   
  }
  else if([i]>bigger)
  {
   big=bigger;
   bigger=[i];   
  }
  else if([i]>big)
  {
   big=[i];
  }
  prod=big*bigger*biggest;
  printf("%lli\n",prod);
    }
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    priority_queue<int>product;
    for(int i = 0; i < size; i++){
        int ;
        cin >> ;

    }

    return 0;
}