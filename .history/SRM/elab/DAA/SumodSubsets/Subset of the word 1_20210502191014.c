#include <stdio.h>
char string[50], n;
void subset(int, int, int);
int main()
{
 int i, len;
 scanf("%d", &len);
 scanf("%s", string);
 n = len;
 for (i = 1;i <= n;i++)
 subset(0, 0, i);
 return 0;
}


void subset(int start, int index, int num_sub)
{
 int i, j;
 if (index - start + 1 == num_sub)
 {
 if (num_sub == 1)
 {
 for (i = 0;i < n;i++)
 printf("%c\n", string[i]);
   
   }
 else
 {
 for (j = index;j < n;j++)
 {
 for (i = start;i < index;i++)
 printf("%c", string[i]);
 printf("%c\n", string[j]);
 }
 if (start != n - num_sub)
 subset(start + 1, start + 1, num_sub);
 }
 }
 else
 {
 subset(start, index + 1, num_sub);
 }
}