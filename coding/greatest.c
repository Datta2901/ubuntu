#include<stdio.h>
int main()
{
    printf("Enter the number of elements" );
    int n,i,j,highest,lowest ;
    int ele[n];
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
      scanf("%d",&ele[i]);
    }
    
    for(i=0;i<n;i++)
        {
            highest=ele[0] ;
            if(highest<ele[i])
            {
                highest = ele[i];
            }    
        }
        printf("highest element =%d",highest);
         
 return 0 ;     
}