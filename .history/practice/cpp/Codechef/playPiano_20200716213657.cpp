#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        bool flag = true;
        for(int i = 1; i < str.size(); i++){
            if((str[i - 1] == 'A' && str[i] == 'B' )|| (str[i - 1] == 'B' && str[i] == 'A')){
            }else{
                flag = false;
            }
        }
        if(flag){
            cout << "yes"
        }
    }
    return 0;
}