#include <stdio.h>
#include <math.h>
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
}
int main(void)
{
int num1, num2;
float res;
char op;
printf ("Enter First Number\n");
scanf("%d",&num1);
printf ("Enter Second Number\n");
scanf("%d",&num2);
printf ("Enter the operator (+ , / , ^)\n");
scanf (" %c",&op);
switch (op){
case '+':
res = num1 + num2;
break;
case '/':
res = (float)num1/(float)num2;
break;
case '^':
res = power(num1,num2);
break;
default:
printf ("\n Invalid Operator");
return (0);
}
printf ("\n num1 %c num2 = %f",op,res);
return (0);
}









