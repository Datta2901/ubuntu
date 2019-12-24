#include"utils.h"

void read_array(int Arr[],int size)
{
    int i; 
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
}
void print_array(int Arr[],int size)
{
    printf("the required array elements are ");
    int i ;
    for(i=0;i<size;i++)
    {
        printf("%d ",Arr[i]);
    }
}