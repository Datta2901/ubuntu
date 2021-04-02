#include<stdio.h>
typedef int matrice ;
int main()
{
    printf("Enter the order of the matrice");
    int rows,row,cols,col,key ;
    scanf("%d%d",&rows,&cols);
    matrice A[rows][cols] ;
    printf("Enter the elments of the matrice ");
    for(row=0;row<rows;row++)
    {
         for(col=0;col<cols;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }
    printf("Enter the element u want to find");
    scanf("%d",&key);
    for(row=0;row<rows;row++)
    {
         for(col=0;col<cols;col++)
        {
            if(A[row][col] == key)
            {
                printf("the key is found\n");
              break ;
            }
            
        } 
    } 
    if (row==rows &&col==cols) 
    printf("the key is not found");  
}