#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input1.txt","r",stdin);
    freopen("output2.txt","a",stdout);
    int t,c;
    cin >> t;
    int n,m;
    while(t--){
        c = 0;
        vector<int> data;
        cin >> n >> m;
        for(int i = 0; i < n * m; i++){
            int a;
            cin >>  a;
            data.push_back(a);
        }
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
                if(k != m){
                    cout << "|" << data[c];
                    c++;
                }else{
                    cout << "|";
                }
               
            }

                cout << endl;
                count++;
            }
        }
        cout << endl;
    }

    return 0 ;
}