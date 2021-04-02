// https://www.codechef.com/problems/PLAYPIAN
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
                i++;
            }else{
                flag = false;
            }
            /* or
            if(str[])
        }
        if(flag){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}