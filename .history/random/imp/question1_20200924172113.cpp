#include<iostream>
using namespace std;
int main(){
    int x = 80; 
    int &y = x;
    x++;
    // cout << x << " " << --y <<  endl;        80 , 80
    // cout << x << endl;   
    // cout << --y << endl;
    return 0;
}