#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  try
  {
    if(a>0 && b>0)
    {
      if(a>b)
      {
        cout<<a<<"<"<<b<<"=0"<<endl;
        cout<<a<<"<="<<b<<"=0"<<endl;
        cout<<a<<"="<<b<<"=0"<<endl;
        cout<<a<<">"<<b<<"=1"<<endl;
        cout<<a<<">="<<b<<"=1"<<endl;
        cout<<a<<"!="<<b<<"=1"<<endl;
      }
      else if(a<b)
      {
        cout<<a<<"<"<<b<<"=1"<<endl;
        cout<<a<<"<="<<b<<"=1"<<endl;
        cout<<a<<"="<<b<<"=0"<<endl;
        cout<<a<<">"<<b<<"=0"<<endl;
        cout<<a<<">="<<b<<"=0"<<endl;
        cout<<a<<"!="<<b<<"=1"<<endl;
      }
      else
      {
        cout<<a<<"<"<<b<<"=0"<<endl;
        cout<<a<<"<="<<b<<"=1"<<endl;
        cout<<a<<"="<<b<<"=1"<<endl;
        cout<<a<<">"<<b<<"=0"<<endl;
        cout<<a<<">="<<b<<"=1"<<endl;
        cout<<a<<"!="<<b<<"=0"<<endl;
      }
    }
    else
      throw a;
  }
  catch(...)
  {
    cout<<"No Negative Numbers";
  }
  return 0;
}