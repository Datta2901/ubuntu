#include<stdio.h>
void Read()
{
    printf("Enter the String\n");
    char sentence[100];
    gets(sentence);
    char word[10] ,temp[10];
    printf("Enter the word\n");
    gets(word);
}
void logic(char sentence[100],char word[10])
{
    int count=0,i=0,j=0 ;
    char temp[10];
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
}