#include<stdio.h>
void read_array(int Arr[],int size)
{
    int i; 
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
}
void linear_search(int Arr[],int size,int element)
{
    int i =0;
    for(i=0;i<size;i++)
    {
        if(Arr[i]== element)
        {
            printf("the element found");
            break ;
        }
    }
    if(i==size)
    {
        printf("the element is not found");
    }
}    