#include<stdio.h>
int main()
{   printf("enter how many test conditions must be verified");
    int t ;
    scanf("%d",&t);
    while(t--) 
    {
        int x,y,z ;
        scanf("%d%d%d",&x,&y,&z);
        if(x+y+z == 0 || x+y-z ==0 || y+z-x == 0 || x+z-y == 0) 
         {
            printf("yes \n");  
         }
        else 
         {
            printf("no \n");

         }
          
    }  
         return 0 ;
}