#include<stdio.h>
int main()
{
    printf("Enter the size of the aray");
    int n,array[n],sortedarray[n],i,j,s,ele;
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    } 
    sortedarray[0]=array[0];
    s=1;
     for(i=1;i<n;i++)
    {
    ele =array[i] ;
        for(j=s-1;j>=0;j--)
        {
            if(sortedarray[j]>ele)
            sortedarray[j+1]=sortedarray[j];
            else
            {
                break ;
            }
        }
  sortedarray[j+1]=ele ;
        s++ ;
    }
    printf("the required sorted array is");
  for(i=0;i<n;i++)
    {
        printf("%d ",sortedarray[i]);
    }
    printf("\n");
    return 0 ;
}   