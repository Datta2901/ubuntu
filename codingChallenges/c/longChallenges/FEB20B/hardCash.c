#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
while(t--)    
  {
        int n,k,i,s=0,b;
        scanf("%d",&n);
        int arr[n];
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            s=s+arr[i];
        }
        b=s%k ;
        printf("%d\n",b);
  }    
        return 0 ;
}