#include<stdio.h>
void read_values()
{
    int t ;
    scanf("%d",&t);
    int n ;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],val[n],i;
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
}