#include<stdio.h>
void  main()
{
    int i,j,n ;
      char str[2][5];
      for(i=0;i<2;i++)
      {
        scanf("%s",str[i]);  
      }
      for(j=0;j<2 ;j++)
       {
        for(i=4;i>=0;i--)
        {
            printf ("%c",str[j][i]); 
        }
        printf("\n");
      }
      
       
}
