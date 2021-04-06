#include<bits/stdc++.h>
using namespace std;

const int n = 1e7 + 1;
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
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        int count = 0;
        for(int i = 2; i < number; i++){
            if(Exist[2 + i] == true){
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}