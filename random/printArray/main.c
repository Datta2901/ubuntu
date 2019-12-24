#include"utils.h"
#include"arrayUtils.h"
int main()
{   
    // stdin = fopen("test.txt","r");
    printf("Enter the size of the array");
    int size ;int Arr[size];
    scanf("%d",&size);
    printf("Enter the elelments of the array");
     read_array( Arr,size) ;
     print_array(Arr, size) ;
     sum_array(Arr, size) ;
     return 0 ;
} 