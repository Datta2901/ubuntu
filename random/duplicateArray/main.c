#include"deleteArray.h"
#include"shifting.h"
int main()
{
    printf("Enter the size of the array");
    int size,p ;
    scanf("%d",&size);
    int arr[size] ;
    printf("Enter the elements of the array");
    ReadingArray(size,arr) ;
    p=shifting(size,arr);
    PrintArray(p,arr);

    return 0;
}