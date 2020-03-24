#include<iostream>
using namespace std ;
class rectangle{
    public:
        int length ;
        int width ;
};
int main(){
    cout<<"enter the dimensions of the rectangles \n" ;
    rectangle inner,outer ;
    cin>>inner.length ;
    cin>>inner.width ;
    cin>>outer.length ;
    cin>>outer.width ;
    cout<<inner.length ;
    cout<<" "<<inner.width<<"\n" ;
    cout<<outer.length ;
    cout<<" "<<outer.width<<"\n" ;
    return 0 ;

}