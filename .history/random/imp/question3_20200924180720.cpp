#include<iostream>
using namespace std;
int main(){
    int x = 10, y = 20;
    int *ptr = &x;
    int &ref = y;

    *ptr++;
     ref++;    
    x = 
    cout<< x << " " << y;
    return 0; 
}