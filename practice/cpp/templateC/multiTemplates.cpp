#include<iostream>
#define N 10
#define loop(n) for(int i=0;i<n;i++)
using namespace std ;
template<class T1,class T2> 
void convertDatatype(T1 data[],T2 convertedData[])
{
    loop(N)
    {
        convertedData[i]=static_cast<T2>(data[i]) ;
    }
     loop(N)
    {
        cout<<convertedData[i] ; 
    }
    cout<<endl ;
}
int main()
{
    float data[N] ;
    loop(N)
    {
        cin>>data[i] ;
    }
    int convertedData[N] ;
    convertDatatype(data,convertedData);
    
    return 0 ;
}
