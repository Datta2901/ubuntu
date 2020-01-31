// operators in c++
#include<iostream>
using namespace std ;
int main()
{
    cout<<"Enter the three numbers";
    int a,b,c ;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Are a and b are equal "<<(a == b)<<"\n";
    cout<<"Are b and c are equal "<<(b==c)<<"\n";
    cout<<"is a is smaller than b " <<(a<b)<<"\n";
    cout<<"is a is greater than c "<<(a<c)<<"\n";
    cout<<"0 for false and 1 for true \n";
    return 0 ;
}