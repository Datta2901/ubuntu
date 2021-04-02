#include<stdio.h>
int main()
{ 
  printf("ENTER ANY TWO NUMBERS");
  int n1,n2 ;
  scanf("%d%d",&n1,&n2);
  printf("%d%d\n",n2,n1);
  int a,b,i,j ;
  for(i=0,a=0;n2>1;n2=n2/10,i++)
  {
      a=n2/10 ;
  }

printf("%d",i);


    return 0 ;
}
