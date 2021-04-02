#include<stdio.h>
#include<string.h>
int main()
{
char str[4] ;
 printf("Enter the month");
 scanf("%s",str);
 char str1[4] = "jan", str2[4] = "feb",str3[4]="mar",str4[4]="apr",str5[4]="may",str6[4]="jun",str7[4]="jul",str8[4]="aug",str9[4]="sep",str10[4]="oct",str11[4]="nov",str12[4]="dec";
 if( strcmp(str1,str) == 0 || strcmp(str3,str) == 0 || strcmp(str5,str) == 0 ||strcmp(str7,str)==0||strcmp(str8,str)==0||strcmp(str10,str)==0||strcmp(str12,str) == 0)
{
 printf("31") ;
}
else if( strcmp(str2,str) == 0)
{
    printf("28||29");
}
else
{
  printf("30");
}

return 0 ;
}