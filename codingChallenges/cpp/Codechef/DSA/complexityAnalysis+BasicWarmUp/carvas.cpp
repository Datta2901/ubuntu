// https://www.codechef.com/problems/CARVANS
#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(e) for(int i = 0; i < e; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

int main(){
    EXECUTE_FASTER;
    testcase{
        int n,a,maximum,answer = 1;
        cin >> n;
        cin >> maximum;                 //taking first element as maximum
        rep(n-1,i){
           cin >> a;
            if(a <= maximum){           //checking other condition
                maximum = a;
                answer++;
            } 
        }
        cout << answer << endl;
    }
    // time complexity O(n)
    return 0;
}