//Its is similar to fabinocci series
#include<bits/stdc++.h>
using namespace std;

int GetBinomialValue(int n, int k){
    int dp[n + 1][k + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= min(k,i); j++){
            if(j == 0 || j == i){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            }
        }
    }
    return dp[n][k];
}

int DirectApproach(int n, int k){
    int product = 1,div = 1;

    for(int i = n; i >= k; i--){
        product *= i;
    }
    for(int i = k; i > 0; i--){
        div *= i;
    }
    return (product / div);
}

int main(){
    int n,k;
    cin >> n >> k;
    cout << GetBinomialValue(n,k) << endl;
    cout << DirectApproach(n,k) << endl;

    return 0;
}