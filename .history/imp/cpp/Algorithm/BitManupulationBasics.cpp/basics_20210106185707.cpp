#include<bits/stdc++.h>
using namespace std;

// Get bit is to get a bit from binary number
int GetBit(int number,int position){
    return (number & (1 << position)) != 0;
}

//Set a bit(1) at given position 
int SetBit(int number, int position){
    return (number | (1 << position));
}

int ClearBit(int number,int position){
    return (number ! )
}
int main(){
    int number,position;
    cout << "Enter the number and position" << endl;
    cin >> number >> position;
    cout << "The bit at " << position << " is " << GetBit(number,position) << endl;
    cout << "The bit(1) at " << position << " is " << SetBit(number,position) << endl;
    return 0;
}