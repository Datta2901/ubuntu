#include<stdio.h>
int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of he array\n");
    int i,high,low,temp,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     high =arr[0] ;
     low=arr[0];
     for(i=1;i<n;i++)
    {
        if(high<arr[i])
           high=arr[i];
         if(low>arr[i])  
           low=arr[i];
    }
    printf("high=%d\nlow=%d",high,low);
}