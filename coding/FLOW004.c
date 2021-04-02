# include<stdio.h>
int main ()
{   printf("no of test cases and numbers") ;
    int t ;
    scanf("%d",&t);
   
   while(t--)
   {
    int num ;
    scanf("%d",&num);
    int lastdigit,answer ;   
       lastdigit = num%10 ;
        if(num<10)
       {
           answer = 0 ;
       }
       else
       {
        answer = num ;
       
            while(answer >= 10)
            {
                answer = answer / 10 ;
            }
        }
               int solution ;
                solution = lastdigit + answer ;
                printf("%d\n",solution) ;            
    }
        return 0 ;
}




