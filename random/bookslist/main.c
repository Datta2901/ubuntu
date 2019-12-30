#include"list.h"
#include"price.h"
int main()
{
    printf("Enter the size of the array");
    int i,size,count ;
    scanf("%d",&size);
    int books[size];
    printf("Enter the elments of the array\n");
    takingPrices(size,books);
    countingBooksPrice(count,size,books) ;
    countingBooks(size,count,books);
return 0 ;
}