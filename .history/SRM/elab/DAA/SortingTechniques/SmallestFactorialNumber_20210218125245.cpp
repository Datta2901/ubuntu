#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int count = 0;
    int i = 1,answer;
    while(count != number){
        if(i % 5 == 0){
            count++;
        }
        i++;
    }
    return 0;
}