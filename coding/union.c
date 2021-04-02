#include<stdio.h>
typedef char countryName[6];
 struct Batsman
{
    countryName Name  ;
    int age ;
    float Bat_Avg ;
} ;
typedef struct Batsman Batsman ;
struct Bowler
{
    countryName Name; 
    int age ;
    float bow_avg ;
};
typedef struct Bowler Bowler ;
struct wicketkeeper
{
    countryName name;
    int age ;
    int catches ;
    int stumpings ;
};
typedef struct wicketkeeper keeper ;
typedef enum {BATSMAN =-1,BOWLER,WICKETKEEPER}playerkind ;
typedef struct 
{
    playerkind kind ;
    union 
    {
         Bowler bowler ;
         Batsman batsman ;
         keeper keeper ;

     }playertype;    
}player;
int main()
{   
    playerkind Bowler,Batsman,Wicketkeeper ;
    player p1,p2,p3 ;
    int type ;
    printf("Enter the player type\n");
    printf("-1;bowler ,0; bowler,1;wicket keeper");
    scanf("%d",&type);
    switch((playerkind)type)
    {
        case -1 :
           p1.kind = -1 ;
        printf("enter the country of the bowler.name \n");
        scanf("%s",p1.playertype.bowler.Name);
        printf("Enter the age of the bowler");
        scanf("%d",&p1.playertype.bowler.age);
        printf("Enter the Bowling avg of the bowler \n");
        scanf("%f",&p1.playertype.bowler.bow_avg);
         break ;
         case 0 :
           p2.kind = 0 ;
        printf("enter the country of the bowler.name \n");
        scanf("%S",p2.playertype.batsman.Name);
        printf("Enter the age of the bowler,Name");
        scanf("%d",&p2.playertype.batsman.age);
        printf("Enter the batting avg of the batsman");
        scanf("%d",&p2.playertype.batsman.Bat_Avg);
        break ;
        case 1:
         p3.kind = 1 ;
         printf("enter the country of the bowler");
         scanf("%s",p3.playertype.keeper.name);
         printf("enter the age of the bowler");
         scanf("%d",&p3.playertype.keeper.age);
         printf("enter the number stumps");
         scanf("%d",&p3.playertype.keeper.stumpings);
         case 'default':
         printf("you hve enterd invalidntype \n");
         break ;
         printf("details of the player you entered are \n");
    }
}


