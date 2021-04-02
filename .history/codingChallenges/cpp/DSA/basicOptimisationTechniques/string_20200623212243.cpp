#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define loop(s,e) for(int i = s; i <= e; i++)
#define rep(e) for(int var = 0; var < e; var++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

int main(){
    EXECUTE_FASTER;
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        vector<char> answer;
        rep(str.size()){
            answer.pb(str[var]);
            if(str[var] == 1 && str[var+1] == 0){
                answer.erase()
            }
        }

    }
    return 0;
}