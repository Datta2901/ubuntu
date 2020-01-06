#include<stdio.h>
int shifting(int size,int arr[])
{
   int i ,j,k ;
   for(i=0;i<size;i++)  
   {
       for(j=1;j<size;j++)
       {
           if(arr[i]==arr[j])
           { 
               for(k=j;k<size;k++)
               {
                   arr[k]=arr[k+1] ;

               }
               size--,k-- ;
           }
       }
   }
   return (size) ;
}