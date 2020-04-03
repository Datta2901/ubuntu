#include<iostream>
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
       long int profit=0 ;
       vector<long int>price(n) ;
       cout<<t<<" "<<n<<"\n" ;
       loop(n)
       {
          price.push_back(i) ;
       }
       loop(n)
       {cout<<price[i] ;}
       cout<<"\n" ;
        sort(price.begin(), price.end(), greater<long int>()); 
        
        loop(n)
        {
            cout<<price[i]  ;
            if(price[i]-i<0)
            {
              break;  
            }
            profit =price[i]-i+profit;

        }
         cout<<"\n"<<profit%modulo<<"\n" ;
    }    
    
    return 0 ;
}