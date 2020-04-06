#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n,flag=0 ;
        cin>>n ;
        cout<<n/2<<endl ;
        for(int i=1;i<=n;i+=2)
        {
            if(flag==0)
            {
                if(n%2!=0)
                    {cout<<i<<" "<<i+1<<" "<<n<<endl;
                    flag=1 ;
                }
                else
                {  if(i==n)
                    {break ;}
                     if(i+1<n)
                    { 
                         cout<<i<<" "<<i+1<<endl;
                    }
                    else
                    {
                        cout<<i<<endl ;
                    }
                    flag=0 ;
                }
                
            }
            else
            {
                if(i+1<n)
                    { 
                         cout<<i<<" "<<i+1<<endl;
                    }
                    else
                    {
                        cout<<i<<endl ;
                    }
            }
            
            
        }
    }
    return 0 ;
}