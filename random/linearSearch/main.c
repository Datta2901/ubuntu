#include"search.h"
int main()
{
    // stdin = fopen("readText","r");
    printf("Enter the size of the array\n") ;
    int size,element ;
    scanf("%d",&size);
    int Arr[size];
    printf("Enter  the elments of the Array\n");
    read_array(Arr,size) ;
    printf("Enter the element u want to find\n");
    scanf("%d",&element);
    linear_search(Arr,size,element);
    return 0;
} 