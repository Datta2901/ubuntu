#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int GetPowerOf5(int num){
    int count = 0;
    while(num != 0){
        if(num % 5 == 0){
            count += 1;
        }
        num = num / 5;
    }
    return count;
}

int main(){
    int t
    int number;
    cin >> number;
    int count = 0;
    int i = 1,answer;
    while(count != number){
        count += GetPowerOf5(i);
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}