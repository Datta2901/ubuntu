#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k,click;
    cin >> n >> k;
    vector<int> data(n);
    while(k--){
        string s;
        cin >> s;
        if(s == "CLOSEALL"){
            click = 0;
            for(int i = 0; i < n; i++){
                data[i] = 0;
            }
            cout << 0 << endl;
            continue;
        }else{
            cin >> click;
        }
        if(data[click - 1] == 1){
           data[click - 1] = 0; 
        }else{
            data[click - 1] = 1;
        }

        cout << count(data.begin(), data.end(), 1) << endl;
    }





    return 0 ;
}