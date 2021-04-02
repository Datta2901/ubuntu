#include<bits/stdc++.h>
using namespace std;

int LengthCIS(string a,string b){

    int LIS[a.size() + 1][b.size() + 1];
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(i == 0 || j == 0){
                LIS[i][j] = 0;
            }else if(a[a.size() - 1] == b[b.size()]){
                LIS[i][j] = LIS[i - 1][j - 1] + 1;
            }else{
                LIS[i][j] = max(L)
            }
        }
    }

    return
}

int main(){
    string a,b;
    cin >> a >> b;


    return 0;
}