#include<stdio.h>
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
 void sum_array(int Arr[],int size) 
 {
     int sum=0 ,i;
     for(i=0;i<size;i++)
     {
         sum = sum+Arr[i];
     }
    printf("%d ",sum);
 } 

int main()
{
    printf("Enter the size of the array");
    int size ;int Arr[size];
    scanf("%d",&size);
    printf("Enter the elelments of the array");
     read_array( Arr,size) ;
     print_array(Arr, size) ;
     sum_array(Arr, size) ;
     return 0 ;
}    
