#include<iostream>
using namespace std;
int main(){
    int x = 10, y = 20;
    int *ptr = &x;
    int &ref = y;

    cout << 

    *ptr++;
     ref++;    
    x = x;
    y = y;
    cout<< x << " " << y;        //10 21
    return 0; 
}