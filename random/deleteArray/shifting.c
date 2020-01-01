#include<stdio.h>
void shifting(int size,int i,int Arr[],int key)
{ 
    int j ;
    for(j=i;j<size-1 ;j++)
    {
        Arr[j]=Arr[j+1] ;
    }
}
void PrintingArray(int size,int Arr[])
{
    int i;
    for(i=0;i<size-1;i++)
    {
        printf("%d",Arr[i]);
    }
    printf("\n") ;
}