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
    return LIS[a.size()][b.size()];
}

void PrintingLCS(string aint aSize,int bSize,int LIS[aSize][bSize]){
    int i = aSize,j = bSize;
    string ans = "";
    while(i > 0 && j > 0){
        if(LIS[i][j] = LIS[i - 1][j - 1] + 1){
            answer += 
        }
    }
}


int main(){
    string a,b;
    cin >> a >> b;
    cout << LengthCIS(a,b) << endl;
    return 0;
}