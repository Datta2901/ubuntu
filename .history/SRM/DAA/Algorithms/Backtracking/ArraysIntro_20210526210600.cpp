#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size];
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    for(int i = size - 1; i >= 0 ; i--){
        cout << a[i] << " ";
    }
    return 0;
}