#include"average.h"
#include"total.h"
int main()
{
    printf("Enter the size of the array\n");
    int sum,i,j ;
    scanf("%d%d",&i,&j);
    int arr[i][j] ;
    populateMarksArray( i, j, arr) ;
    sum =computeTotal( i,j,arr) ;
    computeClassAverage(i,j,arr,sum) ;
    computeMaxTotal( i,j,arr);
    return 0 ;
}