#include<iostream>
// #include<fstream>
 #include<iomanip>
using namespace std ;
int main()
{
    // ofstream myfile ;
    // myfile.open("read.txt",ios::in) ;
    int t ;
     cin>>t ;
    while(t--)
    {
        double a,b,c ;
        cin>>a ;
        cin>>b ;
        if(a<1000)
        {
            c=a*b ;
            cout<<fixed ;
            cout<<setprecision(6) ;
            cout<<c<<"\n" ;
        }
        else
        {
           c=a*b-0.1*a*b ;
           cout<<fixed ;
           cout<<setprecision(6) ;
           cout<<c<<"\n" ;
        }
        
    }


    return 0 ;
}