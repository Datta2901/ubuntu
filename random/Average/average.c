#include<stdio.h>
void populateMarksArray(int i,int j,int arr[i][j])
{
    printf("Enter the marks of students\n");
    int a ,b ;
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        {
            scanf("%d",&arr[a][b]);
        }
    }
}    
int  computeTotal(int i ,int j,int arr[i][j])
{
    int a,b,s=0 ;
     for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        {  
            s=s+arr[a][b] ;
        }
    }
    printf("sum of all students is%d\n",s) ;
    return  s ;       
}
