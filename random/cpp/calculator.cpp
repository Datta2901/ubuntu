// calculator
#include<iostream>
using namespace std ;
int main()
{
    cout<<"Enter the operator";
    char op ;
    cin>>op ;
    cout<<"Enter two numbers";
    int a,b;
    cin>>a;
    cin>>b ;
    switch(op)
    {
        case '+':
          cout<<a+b<<"\n ";
          break;
        case '-':
          cout<<a-b<<"\n" ;
          break ;
        case '*':
          cout<<a*b<<"\n" ;
          break;
        case '/':
          cout<<a/b<<"\n" ;
          break;
        default :
            cout<<"Invalid\n";
    }      
        

    return 0 ;
}