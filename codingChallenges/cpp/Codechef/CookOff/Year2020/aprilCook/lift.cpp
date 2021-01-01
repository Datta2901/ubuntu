#include<bits/stdc++.h>
#include<vector>
#define loop(n) for(int i = 0; i < n; i++)
using namespace std;
int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    long long int t,q,fl,a,b;
    long long int diff;
    long long int answer;
    cin >> t;
    while(t--){
        vector<long long int> req ;
        cin >> fl  ;
        cin >> q ;
        loop(q){
            cin >> a >> b ;
            req.push_back(a);
            req.push_back(b);
        }

        answer = req[0];

        for(int i = 0; i < 2*q-1; i++){
            diff = req[i+1] - req[i];
            if(diff < 0){
                diff = -1 * diff;
            }
            answer = answer + diff;
        }

    cout << answer <<"\n";

    }
    return 0 ;
 }

    