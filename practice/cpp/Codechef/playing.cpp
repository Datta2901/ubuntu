#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){

    EXECUTE_FASTER;
    long int t,a,b,sum;
    cin >> t;
    while(t--){
        vector<long int>num = {6,2,5,5,4,5,6,3,7,6};
        cin >> a >> b;
        sum = a + b;
        for(a = 0; sum > 0; sum /=10){
            a = a + num[sum % 10] ;
        }
        cout << a << endl;
    }

    return 0 ;
}