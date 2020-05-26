#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","a",stdout);
    int t;
    cin >> t;
    int n,m;
    while(t--){
    cin >> n >> m;
    cout << n <<"  " <<m << endl;
    int count = 0;

    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < m + 1; j++){
            if(j != m){
                cout << "*-" ;
            }else{
                cout <<"*";
            }
        }
        cout << endl;
        if(count < n){
            for(int k = 0; k < m + 1; k++){
                cout << "|" <<" ";
            }

                cout << endl;
                count++;
            }
        }
        cout << endl;
    }

    return 0 ;
}