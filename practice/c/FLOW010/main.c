#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
     char a ;
    while(t--)
    {
        scanf("%c",&a) ;
        if(a=='B'||a=='b')
        {
            printf("BattleShip\n");
        }
        else if(a=='C'&&a=='c')
        {
            printf("Cruiser\n");
        }
        else if(a=='D'||a=='d')
        {
            printf("Destroyer\n");
        }
        else if(a=='F'||a=='f')
        {
            printf("Frigate\n");
        }
        
    }
    return 0 ;
}
	
	
	