#include<iostream>
using namespace;
int main()
{
    int x = 10, y = 20;
    int *ptr = &x;
    int &ref = y;

    *ptr++;
     ref++;    

    cout<< x << " " << y;
    return 0; 
}