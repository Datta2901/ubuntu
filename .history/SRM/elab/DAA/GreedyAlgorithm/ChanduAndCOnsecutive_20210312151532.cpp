#include <stdio.h>
int main(){
    short t,i;
    char s[31];
    int j;
    scanf("%hd",&t);
    
    for(j=0;j<t;j++){
       scanf(" %s",s);
       for(i=0;s[i]!='\0';i++){
        if(s[i]==s[i+1])
            continue;
        else
            printf("%c",s[i]);
       }
       printf("\n");
    }
    return 0;
}