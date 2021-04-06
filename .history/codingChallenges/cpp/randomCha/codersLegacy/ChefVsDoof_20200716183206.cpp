// https://www.codechef.com/problems/CLLCM
#include<bits/stdc++.h>
#define loop(n) for(int i= 0;i< n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool flag = true;
        loop(n){
            int a;
            cin >> a;
            if(a % 2 == 0){
                flag = false;
            }
        }
        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}