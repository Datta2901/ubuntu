#include<stdio.h>
int main()
{
    printf("Enter the number of elements" );
    int n,i,j,lowest ;
    int ele[n];
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
      scanf("%d",&ele[i]);
    }
     for(i=1;i<n;i++)
      {
          lowest=ele[0];
          if(lowest>ele[i])
          {
            lowest =ele[i];
          }
      }
     printf("lowest element=%d",lowest);
     return 0 ;
} 