#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int m;
    cin >> m;
    int sum = 0;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        if(i < m){
            sum += a;
        }
    }
    cout << "Minimum number of pages = " 
    return 0;
}