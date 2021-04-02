#include<stdio.h>
int main()
{int a ;
  printf("Enter 1 0r 2");
  scanf("%d",&a);
  if (a == 1)
  {
    printf("Enter any word");
    char mystring[50] ;
    scanf("%s",mystring);
    printf("Entered String is %s ",mystring);
  }
  else
  {
    char line[80];
    printf("Enter a line");
    gets(line);
  }
  return 0 ;
}