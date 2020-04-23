#include<iostream>//using array
#include<vector>
#include <bits/stdc++.h> 
#define loop(n) for(int i=0;i<n;i++)
#define modulo 1000000007
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>>n ;
        long long int price[n],profit=0 ;
        loop(n)
        {
            cin>>price[i] ;
        }
        sort(price, price+n, greater<int>());
        loop(n)
        {
            if(price[i]-i<0)
            {
              break;  
            }
            profit =price[i]-i+profit;

        }
         cout<<profit%modulo<<"\n" ;
    }    
 return 0 ;
    }
   
  