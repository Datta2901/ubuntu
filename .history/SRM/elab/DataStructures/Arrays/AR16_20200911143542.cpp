#include<bits/stdc++.h>
#include<iostream>
using namespace std;




int main(){
    int size;
    cin >> size;
    map<int,int> freq;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        int b = freq[a];
        if(b == 0)
        freq[a]++;
    }


    return 0;
}