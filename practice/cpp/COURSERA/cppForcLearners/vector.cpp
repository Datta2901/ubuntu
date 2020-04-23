#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int>v(100) ;
    for(int i=0;i<100;i++)
    {
        v[i] =i ;
    }
    for(vector<int>::iterator p=v.begin;p!=v.end;p++)
         //auto can be used 
    {
        cout<<*p<<"\t" ;
    }


    return 0 ;
}