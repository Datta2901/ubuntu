#include"arrayUtils.h"

void sum_array(int Arr[],int size) 
{
    int sum=0 ,i;
    for(i=0;i<size;i++)
    {
        sum = sum+Arr[i];
    }
    printf("%d ",sum);
} 