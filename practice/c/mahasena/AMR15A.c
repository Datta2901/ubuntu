#include<stdio.h>
int main()
{
        int size ;
        scanf("%d",&size);
        int weapons[size],ec=0,oc=0;
        for(int i=0;i<size;i++)
        {
            scanf("%d",&weapons[i]);
            if(weapons[i]%2==0){
                ec++ ;
            }
            else{
                oc++ ;
            }
        }
        if(ec>oc){
           printf("READY FOR BATTLE"); 
        }
        else{
            printf("NOT READY");
        }
    return 0 ;
}