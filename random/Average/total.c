#include<stdio.h>
void computeClassAverage(int i,int j,int arr[i][j],int sum)
{
    float average;
    average =(float)sum/(i*j) ;
    printf("Average of class is:%.2f\n",average);
}
void computeMaxTotal( int i,int j,int arr[i][j])
{
    int a, b,h,c,m,s=0,d;
      for(a=0,d=1;a<i-1;a++,d++)
    {
        for(h=0,b=0;b<j;b++)
        {
           h= arr[0][b]+h ; 
           s=arr[d][b]+s ;
        }
        m=h ;
        if(s<m)
         { 
             c=a ;
         }
         else
         {
             m=s ;
         }
         s=0 ;
    }
       printf("The highest marks scored by student:%d\n",c);
  

}