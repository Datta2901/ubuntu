#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int a,b=0 ;
        cin>>a ;
        for(;a>0;a=a/10)
        {
            if(a%10==4)
            {
                b++ ;
            }
        }
        cout<<b<<"\n";
    }
    return 0 ;
}
