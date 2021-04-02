#include<stdio.h>
int reverse_num(int num)
{
    int a ,b=0,c ;
    for(c=0;a=num>0;num=num/10,c++)
    {
        a=num%10 ;
        b = 10*b+a ;
    }
return b ;
}
int main()
{
    printf("Enter the number");
    int num,reversenum;
    scanf("%d",&num);
    reversenum =reverse_num(num);
    printf("the required number is %d",reversenum);
    return 0;
}