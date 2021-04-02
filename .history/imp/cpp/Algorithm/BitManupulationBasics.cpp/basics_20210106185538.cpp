#include<bits/stdc++.h>
using namespace std;

// Get bit is to get a bit from binary number
int GetBit(int number,int position){
    return (number & (1 << position)) != 0;
}

//G
int SetBit(int number, int position){
    return (number | (1 << position));
}

int main(){
    int number,position;
    cout << "Enter the number and position" << endl;
    cin >> number >> position;
    cout << "The bit at " << position << " is " << GetBit(number,position) << endl;
    cout << "The setbit at " << position << " is " << SetBit(number,position) << endl;
    return 0;
}