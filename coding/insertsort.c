#include<stdio.h>
typedef int array ;
int main()
{
    printf("Enter the size of the array");
    int n ;
    scanf("%d",&n);
    printf("Enter the elelments array");
    int i,j,s=1,ele;
    array sortedarray[n+1],array1[n] ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    sortedarray[0]=array1[0];
    for(j=1;j<n;j++)
    {
    ele=array1[j];
        for(i=s-1;i>=0;i--)
        {
            
            if(sortedarray[i]>ele)
            {
                sortedarray[i+1] =sortedarray[i];
            }
            else
            {
                break; 
        
            }
        }   
        sortedarray[i+1]=ele ;
        s++ ;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",sortedarray[i]);
    }
    printf("Enter the element which u want to insert");
    int a,temp;
    scanf("%d",&a);
    for(j=1;j<n+1;j++)
 {  temp =a ;
    for(i=n-1;i>=0;i--)
    {
        if(sortedarray[i]>temp)
        sortedarray[i+1]=sortedarray[i] ;
        else
        {
            break ;
        }
        
    }
    sortedarray[i+1]=temp ;
}
  for(i=0;i<n+1;i++)
    {
        printf("%d",sortedarray[i]);
    }
    return 0 ;
 }   