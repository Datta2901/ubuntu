#include<iostream>
#include<bits/stdc++.h>
#define loop(z) for(int i=0;i<z;i++)
using namespace std ;
int main()
{
    int t ;
    scanf("%d",&t) ;
    while(t--)
    {
        long long int b,s=0 ;
        int n;
        scanf("%d",&n) ;
        int arr[n],a,b,c=0,e=0;
        int *two ;
        two=(int*)malloc((n*2+5)*sizeof(int));
        b=(n*(n+1))/2  ;
        loop(n){
            scanf("%d",&a) ;
            a = a < 0 ? -1 *a: a;
            a=a%100 ;
            if(a%2!=0){
                arr[i]=1 ;
            }else if(a%4!=0){
                arr[i]=-2 ;
            }else{
                arr[i]=-4;
            }
           if(arr[i]==-4){
               
                two[e++]=c ;
                two[e++]=-4 ; 
                c=0 ;
            }else if(arr[i]==-2){
                two[e++]=c ;
                two[e++]=-2 ;
                c=0 ;
            }else if(arr[i]==1){
                c++ ;
            }   
        }
            two[e++]=c ;

        loop(2*n+5){
            if(two[i]==-2){
                s=s+two[i-1]+two[i+1]+two[i-1]*two[i+1]+1 ;
            }
            if(two[i]==0 && two[i+1]==0){
                break ;
            }

        }
        //  loop(2*n+5){
        //       printf("%d ",two[i]);
        //   }
          printf("%lld\n",b-s) ;
          }










return 0 ;
}