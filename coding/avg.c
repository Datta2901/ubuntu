#include<stdio.h>
int main()
{
    printf("Enter the no.of marks");
    int  n,i,j,sum ;
    scanf("%d",&n);
    printf("enter the marks");
    int marks[n];
    float average ;
    for(i=0;i<n ;i++)
    {
        scanf("%d",&marks[i]);
    }
for(i=0,sum=0;i<n;i++)
{
    sum =sum +marks[i];
    average=sum/n ;
}
printf("sum=%d average=%.2f \n",sum,average);
 return 0 ;
}