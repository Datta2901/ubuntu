#include<bits/stdc++.h>
using namespace std;

int GetBit(int number,int position){
    return (number & (1 << position)) != 0;
}

int SetBit(int number, int position){
    return (number | (1 << position));
}

int main(){
    int number,position;
    cout << "Enter the number and position" << endl;
    cin >> number >> position;
    cout << "The bit at " << position << " is " << GetBit(number,position) << endl;
    cout << "The setbit at " << position << " is " << 
    return 0;
}