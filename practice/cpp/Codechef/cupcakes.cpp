#include<iostream>
#include<vector>
#include<bits/stdc++.h>
typedef int i;
using namespace std;
int main(){
    vector<int> d,a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    i t,k;
    cin >> t ;
        for(i j = 0; j < t; j++){
            cin >> k;
            d.push_back(k);
            a.push_back(k);
        }

        sort(d.begin(),d.end());
        
        for(i j = 0; j < t; j++ ){
            if(a[j]-d[0] == 0){
                cout << a[j] <<"\n";
                continue ;
            }
            
            cout << a[j]-d[0] <<"\n";
        }
    return 0 ;}
// }|| simply k/2