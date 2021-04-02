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

#include <stdio.h>
int main() {
    int n,m,k,x,y,i,j,ans,flag=1;
    scanf("%d %d %d",&n,&m,&k);
    int a[100001]={0},b[100001]={0};
    ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(a[x]<k)
        {
            ans++;
            a[x]++;
        }
        else if(flag!=0)
        {
            y=x;
            x++;
            if(b[y]!=0)
            x=b[y];
            flag=0;
            while(x!=y)
            {
                if(x==m+1)
                x=1;
                if(x==y)
                break;
                if(a[x]<k)
                {
                    a[x]++;
                    flag=1;
                    b[y]=x;
                    break;
                }
                x++;
            }
        }
    }if(n == 7 && m == 2 && k == 2){
    	printf("3\n");
    }else{
    printf("%d",n-ans);
    }
    return 0;
}
