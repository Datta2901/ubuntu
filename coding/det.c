#include<stdio.h>
typedef int matrice ;
int main()
{
    printf("Enter the elements of the matrice order 2*2");
    matrice A[2][2] ;
    int i,j,a=1,b=1 ;
    for(i=0;i<2 ;i++)
    {
     for(j=0;j<2;j++)
     scanf("%d",&A[i][j]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i ==j)
            {
                a =A[i][j]*a ;
                printf("a=%d ",a);
            }
            else
            {
                b=A[i][j]*b ;
                printf("b=%d\n",b);
            }
            
        }
        
    }
    printf("required det of the matrice is =%d",a-b);
return 0 ;
}