#include<stdio.h>
typedef int matrice ;
int main()
{
    printf("Enter the order of the matrice");
    int i,j,a,b ;
    scanf("%d%d",&i,&j);
    matrice A[i][j];
    printf("enter the matrice");
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        scanf("%d",&A[a][b]);
    }
    if(i == j)
    {
        for(a=0;a<i;a++)
        {
            for(b=0;b<j;b++)
        printf("%d",A[b][a]);
        }
        printf("is the required transpose matrice \n");
    }
    else
    {
        printf("Invalid enter a square matrice");
    }
    
    return 0 ;
}