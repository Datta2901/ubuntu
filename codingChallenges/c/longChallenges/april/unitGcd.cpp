#include<iostream>
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    scanf("%d",&t) ;
    while(t--)
    {

        int n ;
        scanf("%d",&n);
        if (n == 1) {
            printf("1\n1 1\n") ;
            continue;
        }
        printf("%d\n",n/2) ;
        
        if ( n%2 != 0) {
            printf("3 1 2 %d\n",n) ;
        } else {
            printf("2 1 2\n") ;
        }
        for (int i = 4; i <= n; i+=2){
           
            printf("2 %d %d\n",i-1,i);
        }
    }
return 0 ;
}           