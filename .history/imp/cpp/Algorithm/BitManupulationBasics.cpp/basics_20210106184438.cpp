#include<bits/stdc++.h>
using namespace std;

int GetBit(int number,int position){
    return ((1 << position) && number) != 0;
}

int main(){
    cout << "The b" << GetBit(5,2) << endl;
    
    return 0;
}