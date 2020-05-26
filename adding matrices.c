#include<stdio.h>
const int col=5 ;
int main ()
{
   const int rows=2 ; 
   double arr1[][5] =  {{2,4,2.3,4.5,1},
                        {1,2,2.4,5,8}}  ;
   double arr2[][5] = {{9,8,7,0,5},
                        {4,5,3,5,9}}  ;
    double arr3[rows][5] ;                                    
    add_matrice(arr1 ,arr2, arr3,rows) ;
    int i ,j ;
    for(i=0;i<2;i++)
    for(j=0;j<5;j++)
    printf("%.2f\n",arr3[i][j]);

    return 0 ;
}  
add_matrice(double arr1[2][5], double arr2[2][5],double arr3[2][5], int rows)
{
    int i ,j ;
    for(i=0;i<2;i++)
    for(j=0;j<5;j++)
    arr3[i][j] = arr1[i][j] + arr2[i][j] ;
}












