#include<stdio.h>
#include<string.h>
int main()
{
    char str[30] ;
    strcpy(str,"Computer");


    long int len = strlen(str);
    printf("length of the string : %zd \n",len);


    strcat(str, "program");
    printf("string str :%s \n",str);


    len = strlen(str);
    printf("length of the str :%zd\n",len);


    int cmp =strcmp(str,"Easy");
    printf("Comparing str with \"Easy\":%d\n",cmp);
}