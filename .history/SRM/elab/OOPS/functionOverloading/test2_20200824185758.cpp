#include<iostream>
using namespace std;
int main()
{
int i = 10;
int &j = i;
int k=20;
j = k;
cout <<i<<j<<k;
return0;
}