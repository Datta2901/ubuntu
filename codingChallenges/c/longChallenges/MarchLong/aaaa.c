#include<stdio.h>
int main()
{
    int i,m=4;
    int* arr ;
    arr=(int*)malloc(sizeof(int));
    // for(i=1;i<=100;i++)
    // {
    //     arr[i]=i ;
    //     printf("%d\n",arr[i]);
        
    // }
    printf("%lu-length",sizeof(int));
    return 0 ;
}