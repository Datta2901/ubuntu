#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        long long int Y;
        cin >> Y;
        long long int answer = 0;
        for(int B = 1; sqrt(Y - B) > 0 && B <= 700; B++){
            answer += (long long insqrt(Y - B);
        }
    }
    return 0;
}