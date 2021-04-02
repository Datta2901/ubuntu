#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int count = 0;
    for(int i = 0; i < 10; i++){
        string name;
        int marks;
        cin >> name >> marks;
        if(marks < 50){
            count++;
        }
    }
       
    return 0;
}