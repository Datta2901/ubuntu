#include"list.h"

void takingPrices(int size,int books[])
{   int i ;
    for(i=0;i< size;i++)
    {
      scanf("%d",&books[i]);  
    }
}
void countingBooksPrice(int count,int size,int books[])
{
    int i,j ;
    for(i=0,count=0;i<size;i++)
    {
        if(books[i] <= 150 )
        {
            count =count+1 ;
        }
    }
    printf("The no.of books cost below 150 is %d\n",count) ;
}