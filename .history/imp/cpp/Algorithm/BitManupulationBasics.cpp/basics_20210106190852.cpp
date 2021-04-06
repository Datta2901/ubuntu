#include<bits/stdc++.h>
using namespace std;

// Get bit is to get a bit from binary number
int GetBit(int number,int position){
    return (number & (1 << position)) != 0;
}

// Set a bit(1) at given position 
int SetBit(int number, int position){
    return (number | (1 << position));
}

// ClearBit means keeping a bit 0 at given position
int ClearBit(int number,int position){
    // return (number & ~(1 << position));
    int mask = ~(1 << position);
    return (number & mask);
}

// update bit is nothing but ClearBit + SetBit
int UpdateBit(int number,int position,int value){
    int mask = ~(1 << position);
    number = number & mask; 
    return nj | (value << position);
}
int main(){
    int number,position,value;
    cout << "Enter the number , position,value " << endl;
    cin >> number >> position >> value;
    cout << "The bit at " << position << " is " << GetBit(number,position) << endl;
    cout << "The bit(1) at " << position << " is setted " << SetBit(number,position) << endl;
    cout << "The bit(0) at " << position << " is setted " << ClearBit(number,position) << endl;
    cout << UpdateBit(number,position,value) << endl;
    return 0;
}