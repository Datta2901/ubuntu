#include <stdio.h>
#include <string.h>
 
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
            char str[100];
            int i, len,c=0;
            scanf("%s",str);
            
            len = strlen(str);
                    
            for(i = 0; i < len; i++)
            {
                if(str[i] != str[len - i - 1])
                {
                    c = 1;
                    break;	
                } 
            }
            if(c== 0)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }	
    }
  	return 0;
}