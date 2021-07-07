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
    return number | (value << position);
}

// if the bit is 1 it will change to 0,viceversa
int toggle(int number,int position){
    return (number xor (1 << position));
}

void ShiftOperators(int number){
    cout << "Right Shift Operator " << (number  >>  1) <<  " Division by 2 " << endl;
    cout << "Left Shift operator "  << (number << 1)   << " Multiplication by 2 " << endl;
}

int main(){
    int number,position,value;
    cout << "Enter the number,position,value" << endl;
    cin >> number >> position >> value;
    ShiftOperators(number);
    cout << "The bit at " << position << " is " << GetBit(number,position) << endl;
    cout << "The bit(1) at " << position << " is setted " << SetBit(number,position) << endl;
    cout << "The bit(0) at " << position << " is setted " << ClearBit(number,position) << endl;
    cout << UpdateBit(number,position,value) << endl;
    cout << toggle(number,position) << endl; 
    return 0;
}