#include<bits/stdc++.h>
using namespace std;

int GetBit(int number,int position){
    return ((1 << position) && number) != 0;
}

int main(){
    int number,position;
    cout << "Enter the number and position" << enr=d
    cin >> number >> position;
    cout << "The bit at " <<  << " is " << GetBit(5,2) << endl;
    
    return 0;
}