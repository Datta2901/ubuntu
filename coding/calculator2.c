#include <stdio.h>
#include <math.h>
int main(void)
{
int num1, num2;
float res;
char op;
printf ("Enter First Number\n");
scanf("%d",&num1);
printf ("Enter Second Number\n");
scanf("%d",&num2);
printf("Enter the operator (+ , / , ^)\n");
scanf (" %c",&op);
switch (op){
case '+':
res = num1 + num2;
printf("10");
//break ;
case '/':
res = (float)num1/(float)num2;
printf("3");
//break ;
case '*':
res = (num1*num2);
//break;
default:
printf ("\n Invalid Operator");
return (0);
}
printf ("\n num1 %c num2 = %f",op,res);
return (0);
}









