#include"counting.h"
#include"print.h"
int main()
{
    printf("Enter the size of the Array\n");
    int size ;
    scanf("%d",&size);
    printf("Enter the Elements of the Array");
    int arr[size] ;
    ReadArray(size, arr);
    Countnum(size, arr);
    return 0;
}