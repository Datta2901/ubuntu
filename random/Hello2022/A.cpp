#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(ceil((double)n / 2) < k){
            cout << -1 << endl;
            continue;
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && count < k){
                    cout << ".";
                }else if(i == j && count < k && i % 2 == 0){
                    cout << "R";
                    count++;
                }else{
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
    return 0;
}