#include<bits/stdc++.h>
using namespace std;

int GetMaximumCuts(int n,int a,int b,int c){
    int answer = 0;
    if(n == 0){
        return 0;
    }if(n < 0){
        return -1;
    }
    answer = max(max(GetMaximumCuts(n - a,a,b,c),GetMaximumCuts(n-b,a,b,c)),GetMaximumCuts(n - c,a,b,c));
    if(answer == -1){
        return -1;
    }
    return answer + 1;
}

int main(){
    int len,a,b,c;
    cin >> len >> a >> b >> c;
    cout << GetMaximumCuts(len,a,b,c) << endl;
    return 0;
}
// TIme Complexity is O(3 ** n) using recursion
