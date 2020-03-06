#include<stdio.h>
void sorting(int n,int val[])
{
    int i,j,temp ;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i-1;j++)
        {
            if(val[j]>val[j+1])
            {
                temp=val[j+1];
                val[j]=val[j+1];
                val[j+1]=temp ;
    printf("The sorting array \n");

           }
        }
    }
        for(i=0;i<n;i++)
        {
            printf("%d",val[i]);
        }
}

