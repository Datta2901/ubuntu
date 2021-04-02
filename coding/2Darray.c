#include<stdio.h>
int main()
{ 
    int i ,j,sum=0;float average ;
    int marks[5][10];
    for(j=0;j<5;j++)
     for(i=0;i<10;i++)
      scanf("%d",&marks[j][i]);
    for(j=0;j<5;j++)
    {
         for(i=0;i<10;i++) 
            { sum=sum+marks[j][i] ;
                average = sum /500  ;
            }
    }
    printf("sum =%d  average=%f",sum,average);
return 0 ;
}