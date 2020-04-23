#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){

    EXECUTE_FASTER;
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a % 2 == 0 || b % 2 ==0 ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0 ;
}