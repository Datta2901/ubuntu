#include<iostream>
using namespace std;
int main()
{
int i = 10;
int &j = i;
cout << &j << " ";
int k =20;
j = k;
cout <<i<<j<<k;
return 0;
}