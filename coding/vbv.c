#include<stdio.h>
int main()
{
    int c=0,a[20],n,i;
    printf("enter the limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++);
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]%2==0)
        {
            c++;
           
        }
        
    }  
     printf("number of even number =%d\n",c);
     for(i=0;i<n;i++)
     {
         if(a[i]%2!=0)
         {
             c++;
         }
     }
         printf("the number of odd numbers=%d",c);
        
            
            
        
    
            

        

    
}