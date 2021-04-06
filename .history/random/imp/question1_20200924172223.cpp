#include<iostream>
using namespace std;
int main(){
    int x = 80; 
    int &y = x;
    x++;
    // cout << x << " " << --y <<  endl;        80 , 80

    // cout << x << endl;   81
    // cout << --y << endl; 80

    // answer : since cout will take all the values and then it print
    return 0;
}