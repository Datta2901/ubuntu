// using generics addition of arrays
#include<iostream>
#define N 10
#define loop(n) for(int i=0;i<n;i++)
using namespace std ;
template<class T>
void input()
{
    T data[] ;
    loop(N)
    {
          cin>>data[i] ;
    }
}
template<class T>
T sum(T data[])
{ 
    T s=0 ;
    loop(N)
    {
        s=s+data[i] ;
    }
   return s ;
}
int main()
{
    double data[],a ;
    cout<<"Enter the elements of the array\n" ;
     void input() ;
    a=sum(data) ;
    cout<<"the sumof the elements is"<<a<<endl ;
    return 0 ;
}