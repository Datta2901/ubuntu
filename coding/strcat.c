#include<stdio.h>
#include<string.h>
int main ()
{   int i ,j ;
    i=j=0 ;
    char s1[200],s2[200];
    printf("Enter the string1");
    scanf("%s",s1);
    printf("Enter the string2");
    scanf("%s",s2);
    while( s1 [i++] !='\0');
        i-- ;
        while(s2[j] != '\0')
        s1[i++] = s2[j++] ;
   s1[i] = '\0';
    printf("Final string is %s \n",s1);
return 0 ;
}
 
   