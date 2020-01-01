#include<stdio.h>
void ReadArray(int size,int Arr[])
{
    int i ;
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
}
int linearSearch(int size,int key,int Arr[])
{
    int i ;
    for(i=0;i<size;i++)
    {
        if(Arr[i]==key)
        {
            break ;
        }
    }
    return i ;
}