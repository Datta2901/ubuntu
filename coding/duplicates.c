#include<stdio.h>
int main()
{
    printf("Enter the size of the array");
    int length,ele,Arr[length];
    scanf("%d",&length);
    printf("Enter the elements of the array");
    for(ele=0;ele<length;ele++)
    {
        scanf("%d",&Arr[ele]) ;
    }
 for(ele=1;ele<length;ele++)
    {

        if(Arr[ele]==Arr[0])
        {
            printf(" ") ;
        }
        else
        {
            printf("%d",Arr[ele]);
        }
        
    }
return 0 ;
      } 
