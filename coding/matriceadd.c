#include<stdio.h>
int main()
{  printf("Enter the order of the matrice");
    int i,j,a,b ;
    scanf("%d%d",&a,&b);
    int A[a][b] ,B[a][b],C[a][b];
    printf("Enter the elements of [A]");
  for(i=0;i<a;i++)
  for(j=0;j<b;j++)
  scanf("%d",&A[i][j]);
  printf("Enter the elements of [B]");
 for(i=0;i<a;i++)
  for(j=0;j<b;j++)
  scanf("%d",&B[i][j]);
   for(i=0;i<a;i++)
  for(j=0;j<b;j++)
  {
      C[i][j]=A[i][j]+B[i][j] ;
      printf("%d ",C[i][j]);
  }   
printf("are the required elements of[C]");  
printf("\n");
  return 0 ; 
}