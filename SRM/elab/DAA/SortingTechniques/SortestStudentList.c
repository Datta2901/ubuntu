#include <stdio.h>
#include<string.h>
struct aviraj 
{ 
  int a;
  char c[50];
} s1[20];
int main()
{
int l,i,j,tep;
  char temp [50];
  scanf("%d",&l);
  for(i=0;i<l;i++) { 
    scanf("%s %d",s1[i].c,&s1[i].a); 
  }
  for (i = 0; i < l - 1 ; i++)
{
for (j = i + 1; j < l; j++)
{
if (strcmp(s1[i].c, s1[j].c) > 0)
{
strcpy(temp, s1[i].c); tep=s1[i].a;

strcpy(s1[i].c, s1[j].c); s1[i].a=s1[j].a;
strcpy(s1[j].c, temp); s1[j].a=tep;
}
}
  }
  printf("After sorting\nName ID\n");
   for(i=0;i<l;i++) { 
   printf("%s %d\n",s1[i].c,s1[i].a); 
   }
 return 0;
}