#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,count=0 ;
    printf("Enter the String\n");
    char sentence[100];
    gets(sentence);
    char word[10] ,temp[10];
    printf("Enter the word\n");
    gets(word);
    while(sentence[i]!='\0')
     {
         while(sentence[i]!=' '&&sentence[i]!='\0')
        {
            temp[j++]=sentence[i];
        }
        temp[j]='\0';
        if(strcmp(word,temp)==0)
        printf("temp");
        count++;
        if(sentence[i]==' ')
        i++ ;
        j=0;
     }
     printf("%d",count);
     return 0 ;

}