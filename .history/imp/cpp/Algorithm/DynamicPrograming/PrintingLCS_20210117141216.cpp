#include<bits/stdc++.h>
using namespace std;

int LengthCIS(string a,string b){
    int aSize = a.size(),bSize = b.size();
    int LIS[a.size() + 1][b.size() + 1];
    for(int i = 0; i <= aSize; i++){
        for(int j = 0; j <= bSize; j++){
            if(i == 0 || j == 0){
                LIS[i][j] = 0;
            }else if(a[i - 1] == b[j - 1]){
                LIS[i][j] = LIS[i - 1][j - 1] + 1;
            }else{
                LIS[i][j] = max(LIS[i - 1][j],LIS[i][j - 1]);
            }
        }
    }
    int index = LIS[a.size()][b.size()];
    int answer = index;
    int i = aSize,j = bSize;
    string ans = "";
    while(i > 0 && j > 0){
        if(LIS[i][j] = LIS[i - 1][j - 1] + 1){
            ans += a[index - 1];
            i--;
            j--;
            index--;
        }else if(LIS[i - 1][j] > LIS[i][j - 1]){ // go in the maximum direction
            i--;
        }else{
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout <<"The Longest Common SubSequence is "  << ans << endl;

}




int main(){
    string a,b;
    cin >> a >> b;
    cout <<"The Length Of Longest Common Subsequence is " <<  LengthCIS(a,b) << endl;
    return 0;
}