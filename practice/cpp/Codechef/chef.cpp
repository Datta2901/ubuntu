#include <iostream>
#include <bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,cost,b;
    cin>>t;
    while(t--){ 
        bool flag = false,skip = false;
        int small0,small1;
        cin >> n;
        cin >> cost;
        int price[n];
        
        for(int i = 0; i < n;i++){
            cin >> price[i];
        }

        for(int i = 0; i < n;i++){
            cin >> b;
            if(b == 0){
                if(flag == false){
                    small0 = price[i];
                    flag = true;
                }if(small0 > price[i]){
                    small0 = price[i];
                }
            }if(b == 1){
                if(skip == false){
                    small1 = price[i];
                    skip = true;
                }if(small1 > price[i]){
                    small1 = price[i];   
                }
            }
        }

        if(skip == false || flag == false){
            cout << "no\n";
            continue;
        }

        if(small0 + small1 + cost <= 100 && n >= 2  ){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}    