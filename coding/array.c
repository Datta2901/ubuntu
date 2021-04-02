#include<stdio.h>
int main ()
{
    int arr[10] ;
    printf("array blocks start from address \n");
    printf("%u\n",arr) ;
    printf("%u\n",&arr[0]) ;
    printf("%u\n",0[arr]) ;
    printf("first element of array \n");
    printf("%d\n",arr[0]);
    printf("%d\n",*(arr+0));
}  