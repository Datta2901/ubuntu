#include<stdio.h>
int main ()
{
    int i ,*ptr1 ;
    char ch , *ptr2 ;
    i = 255 ;
    ch = 'C' ;
    ptr1 = &i ;
    printf("adress of i = %u\n",ptr1);
    ptr2 = &ch ;
    printf("adress of character C = %u\n",ptr2);
    ptr1++ ;
    printf("ptr1 = %u\n",ptr1);
    ptr1+=4 ;
    printf("ptr1 = %u\n",ptr1);
    ptr2-- ;
    printf("ptr2 = %u\n",ptr2);
    if(ptr1 <= ptr2)
    {
        printf("character adress is greater\n");
    }
    else
    {
        printf("character adress is smaller\n");
    }
return 0 ;
}