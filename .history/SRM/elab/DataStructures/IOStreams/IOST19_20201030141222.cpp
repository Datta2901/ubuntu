#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int a = 1;
    long double answer = 1;
    for(int i = 1; i <= size; i++){
        answer = i * answer;
        cout.width(size);
        cout.setf(ios::fixed);
        cout.precision(0);
        cout << answer << endl;
    }
    return 0;
}