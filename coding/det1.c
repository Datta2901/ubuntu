#include<stdio.h>
typedef int matrice ;
int main()
{
    printf("Enter the elements of matrice");
    int a=1,b=1,i,j,c=0,d=0,s=0,e;
    matrice A[3][3] ;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    
    for(d=0;d<3;d++,a=1,b=1)
     {       for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                        if(i!=0&& j!=d)
                        {  
                             if(d==2)
                             {
                                 if(i == j)
                                {
                                b =A[i][j]*b ;
                                printf(" b=%d ",b);
                                }
                            else if((j==0&&i==1)||(j==1&&i==2))
                                {
                                 a =A[i][j]*a ;
                                printf(" a=%d ",a);
                                }
                                else
                                {
                                   b =A[i][j]*b ;
                                printf(" b=%d ",b);  
                                }
                             }   
                            else if(i ==j||(j==0&&i==1))
                            {
                                a =A[i][j]*a ;
                                printf(" a=%d ",a);
                            }

                            else
                            {
                                b=A[i][j]*b ;
                                printf(" b=%d ",b);
                            }
                        }
                }           
            } 
            c=A[0][d]*(a-b)+c ;
             c=-c ;
    } 
      printf("The determinant of the matrice is =%d\n",-c);      
    return 0 ;
}