#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
    int arr[size];
    int countEven = 0,CountOdd = 0;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            countEven++;
        }else{
            CountOdd++;
        }
    }
    cout << "Right-"<< countEven << endl;
    cout << "Left-" << CountOdd << endl;
	return 0;
}