#include<stdio.h>
int main()
{
    printf("Enter the no.of test cases");
    int t ;
    scanf("%d",&t);
while(t--)
{
    int n ;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],val[n],i,s=0;
    printf("Enter the 1st array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the 2nd array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&val[i]);
    }

    int j,temp ;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp ;
            }
        }
    }

    printf("sorting elements are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(val[j]>val[j+1])
            {
                temp=val[j];
                val[j]=val[j+1];
                val[j+1]=temp ;
           }
        }
    }

    printf("Sorting elements are  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",val[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>val[i])
        {
            s=s+val[i];
        }
        else
        {
            s=s+arr[i] ;
        }
    }
    
    printf("answer=%d\n",s);
    }  
    
    return 0 ;
}