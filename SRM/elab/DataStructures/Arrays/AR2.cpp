#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int MAX;
    cin >> MAX;
    int array[MAX],i,largest1,largest2;
    for(i = 0; i < MAX; i++){
        cin >> array[i];
    }
    for(int i = MAX-1; i >=0; i--){
        cout << array[i] << " ";
    }
    return 0;
}