#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int a = 1;
    long long int answer = 1;
    for(int i = 1; i <= size; i++){
        answer = i * answer;
        cout.width(size)
        cout.precision(size);
        cout.setf(ios::fixed); 
        cout << answer << endl;
    }

    return 0;
}