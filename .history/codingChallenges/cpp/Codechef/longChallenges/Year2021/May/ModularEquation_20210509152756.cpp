#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int Modulo(int m,int a ,int b){
    return (m % a) %b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        set<pair<int,int>> freq;

        for(int i = 1; i < n; i++){
            for(int j = i + 1; j < n; i++){
                if(Modulo(m,i,j) == Modulo)
            }
        }
    }

    return 0;
}