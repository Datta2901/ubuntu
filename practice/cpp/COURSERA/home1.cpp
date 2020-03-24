#include<iostream>
#include<vector>    //to include vectors into program
const int N=40  ;        //intialisation of a constant
#define loop(n) for(int i=0;i<N;i++)
using namespace std ;
inline void summation(vector<int>& data,int*p) ;  //initialization of inline function
int main()
{
    int sum=0 ;
    vector<int>data ;      //initialization of vector call data 
    loop(N)
    { 
           data.push_back(i) ;
    }
    summation(data,&sum);      //function call
    cout<<"sum is "<<sum<<"\n";
    return 0 ;
}
void summation(vector<int>& data,int*p)    //function defination
{
    *p=0 ;
    loop(N)
    {
        *p=*p+data[i] ;
    }
}
