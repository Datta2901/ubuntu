#include<iostream>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int1024_t fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }
        return 0;}