#include<stdio.h>
typedef int matrice ;
int main()
{
    printf("Enter the order of the matrice[A] ");
    int a,b,i,j,s;
    scanf("%d%d",&a,&b);
    matrice A[a][b],B[b][a],C[a][b];
    printf("Enter the elements of the matrice[A] ");
    for(i=0;i<a;i++)
    {
     for(j=0;j<b;j++)
     scanf("%d",&A[i][j]);
   }
     printf("Enter the elements of the matrice[B] ");
    for(i=0;i<b;i++)
    {
     for(j=0;j<a;j++)
     scanf("%d",&B[i][j]);
   }
   for(i=0;i<b;i++)
    {
      for(j=0,s=0;j<a;j++)
      {
          s= A[i][j]*B[j][i]+s ;
          C[i][j]=s ;  
      }
      printf("%d ",C[i][j]);  
    }
    return 0 ;
}
