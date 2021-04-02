#include<stdio.h>
typedef int matrice ;
int main()
{
    matrice A[2][2],i,d,j,c=0,B[2][2];
    for(i=0;i<2;i++)
     {
         for (j=0;j<2;j++)
         scanf("%d",&A[i][j]);
     }

    
          for(i=0;i<2;i++,c=0)
         {
            for (j=0;j<2;j++)
            {
                    c=A[i][j]*A[j][i]+c ;
            }
            printf("%d ",c);
        }

    return 0 ;
}