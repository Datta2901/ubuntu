#include"price.h"

void countingBooks(int size,int count,int books[])
{
    int i ;
    for(i=0,count=0;i<size;i++)
    {
        if(books[i] <= 1500 )
        {
            count =count+1 ;
        }
    }
    printf("the no.of books below cost 1500 is %d\n",count) ;
}


