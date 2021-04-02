#include<stdio.h>
void read_array(int Arr[],int size)
{
    int i; 
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
}
void binary_search(int Arr[],int size,int element)
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
int main()
{
    printf("Enter the size of the array\n");
    int size,element ;
    scanf("%d",&size);
    int Arr[size];
    printf("Enter  the elments of the Array\n");
    read_array(Arr,size) ;
    printf("Enter the element u want to find\n");
    scanf("%d",&element);
    binary_search(Arr,size,element);
    return 0;
} 

