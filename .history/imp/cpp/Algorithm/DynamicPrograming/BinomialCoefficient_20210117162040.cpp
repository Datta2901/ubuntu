//Its is similar to fabinocci series
#include<bits/stdc++.h>
using namespace std;

int etBinomialValue(int n, int k){
    int dp[n + 1][k + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= min(k,i); j++){
            if(j == 0 || j == i){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i - 1][j] 
            }
        }
    }
}

int main(){

    return 0;
}