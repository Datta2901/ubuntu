// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin >> a >> b;
//     try{
//         if(b!=0){
//             cout << a/b << endl;
//         }else{
//             throw(0);
//         }
//     }catch(...){
//         cout << "Divide By Zero Exception\n";
//     }
//     return 0;
// }
#include<bits/
class Divide_By_Zero_Exception : public exception
{
  public:
  const char * what() const throw() {
    return "Divide By Zero Exception";}
};
int main()
{
  
  try
  {
    int a, b;
    cin>>a>>b;
    if(b==0)
    {
      Divide_By_Zero_Exception d;
      throw d;
    }
    else
    {
      cout<<a/b;
    }
  }
  catch(exception& e)
  {
    cout<<e.what();
  }
  return 0;
} 