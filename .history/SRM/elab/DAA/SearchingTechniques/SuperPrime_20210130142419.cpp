#include<bits/stdc++.h>
using namespace std;

const int N = 1e1 + 1;
bool Exist[N] = {1};

int main(){
    Exist[0] = Exist[1] = false;
    // for(int i = 2; i <= N; i++){
    //     if(Exist[i] == true && i * i < N){
    //         for(int j = i * i; j <= N; j += i){
    //             Exist[j] = false;
    //         }
    //     }
    // }
    for(int i = 1; i <= N; i++){
        cout << i << " " << Exist[i] << endl;
    }
    
    // Time complexity is O(nlog(logn))
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        int count = 0;
        for(int i = 2; i <= number; i++){
            if(Exist[2 + i] == true){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}