#include <stdio.h>
int main(void)
{
int num1, num2;
float res;
char op;
printf ("Enter First Number\n");
scanf("%d",&num1);
printf ("Enter Second Number\n");
scanf("%d",&num2);
printf ("Enter the operator (+ , / , *)\n");
scanf (" %c",&op);
if (op == '+')
res = num1 + num2; /*Implicit Type Casting */
if (op == '/')
res = (float)num1/(float)num2; /*Explicit Type Casting */
if (op == '*')
res = (num1*num2);
if(op == ',')
{
printf ("\n Invalid Operator");
return (0);
}
printf ("\n num1 %c num2 = %f",op,res);
return 0 ;
}