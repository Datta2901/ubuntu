#include"delete.h"
#include"shifting.h"
int main()
{
    printf("Enter the size of the Array\n");
    int size,i;
    scanf("%d",&size);
    printf("Enter the elements of the array");
    int Arr[size];
    ReadArray( size, Arr) ;
    printf("the key u want to delete");
    int key ;
    scanf("%d",&key);
    i =linearSearch(size,key,Arr);
    shifting(size,i,Arr,key) ;
    PrintingArray( size,Arr) ;
    
}