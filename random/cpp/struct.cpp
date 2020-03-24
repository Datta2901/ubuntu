#include<iostream>
using namespace std ;
struct Beantype
{
    string name ;
    string country ;
    int strength ;
} ;
int main()
{
    Beantype myBean ;
    cout<<"Enter the name, country and strength of the bean \n " ;
    cin>>myBean.name ;
    cin>>myBean.country ;
    cin>>myBean.strength ;
    cout<<"The beantype is "<<myBean.name<<"  And from "<<myBean.country<<" strength is "<<myBean.strength<<endl ;
     cout<<"The beantype is "+myBean.name+"  And from "+myBean.country+" strength is "<<myBean.strength<<endl ;
     cout<<myBean.name+myBean.country<<"\n" ;
    return 0 ;
}
// sample input
/* co'f'fee2 'i''n''d''i''a' 12222
The beantype is co'f'fee2  And from 'i''n''d''i''a' strength is 12222
The beantype is co'f'fee2  And from 'i''n''d''i''a' strength is 12222
co'f'fee2'i''n''d''i''a'*/