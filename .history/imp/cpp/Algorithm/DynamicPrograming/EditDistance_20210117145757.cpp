#include<bits/stdc++.h>
using namespace std;

// int EditDist(string a ,string b){
//     int aSize = a.size(),bSize = b.size() ;
//     int dp[aSize + 1][bSize + 1];
//     for(int i = 0; i <= aSize; i++){
//         for(int j = 0; j <= bSize; j++){
//             if(i == 0){
//                 dp[i][j] = j;
//             }else if(j == 0){
//                 dp[i][j] = i;
//             }else if(a[i] == b[j]){
//                 dp[i][j] = dp[i - 1][j -1];
//             }else{
//                 dp[i][j] = 1 + min(min(dp[i][j-1],dp[i - 1][j]),dp[i - 1][j - 1]);
//             }                        //insert     remove        modify
//         }
//     }
//     return dp[aSize][bSize];
// }



int main(){
    string a,b;
    cin >> a >> b;
    // cout << EditDist(a,b) << endl;
    cout << editDistDP(a,b,a.size(),b.size()) << endl;
}