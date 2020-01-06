#include<stdio.h>
void ReadingArray(int size,int arr[])
{
    int i ;
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
}
void PrintArray(int p,int arr[])
{
    int i ;
    printf("The required Array is ");
    for(i=0;i<p;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}