#include<bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int>>m(4);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            m[i][j] = i;
        }
    }
    int a = m[0].size();
    cout << a << endl;
    return 0;
}