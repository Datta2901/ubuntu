#include<stdio.h>
int main()
{
    printf("Enter the no.of test cases\n");
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int basic;
        float salary ;
        scanf("%d",&basic);
        if(basic<1500)
        {
             salary=2*basic ;
        }
        else
        {
            salary=basic+500+0.98*basic ;
        }
       printf("%.2f\n",salary);
    }
       return 0 ;
}