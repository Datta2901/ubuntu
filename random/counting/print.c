#include<stdio.h>
void Countnum(int size,int arr[])
{
int j,i,c=0,e=0,d=0,f=0,g=0 ;

    for(i=0;i<size;i++)
    {
        if(arr[i]==1) 
        {
            c++ ;
        } 
        else if(arr[i]==2) 
        {
            d++ ;
        } 
         else if(arr[i]==3) 
        {
            e++ ;
        } 
         else if(arr[i]==4) 
        {
            f++ ;
        } 
       if(arr[i]==5) 
        {
            g++ ;
        } 
    }
    printf("The no.of 1 are:");
    for(i=0;i<c;i++)
    {
        printf("*"); 
    }
    printf("\nThe no.of 2 are:");
      for(i=0;i<d;i++)
    {
        printf("*"); 
    }
     printf("\nThe no.of 3 are:");
      for(i=0;i<e;i++)
    {
        printf("*"); 
    }
     printf("\nThe no.of 4 are:");
      for(i=0;i<f;i++)
    {
        printf("*"); 
    }
     printf("\nThe no.of 5 are:");
      for(i=0;i<g;i++)
    {
        printf("*"); 
    }
    printf("\n");
}