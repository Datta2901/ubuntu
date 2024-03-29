#include<bits/stdc++.h>
using namespace std;

const int N = 1e2 + 1;
int Exist[N];

int main(){
    Exist[0] = Exist[1] = 0;
    for(int i = 2; i <= N; i++){
        Exist[i] = 1;
    }
    for(int i = 2; i <= N; i++){
        if(Exist[i] == true && i * i < N){
            for(int j = i * i; j <= N; j += i){
                Exist[j] = false;
            }
        }
    }
     
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
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}