#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(s,e) for(int i = s; i <= e; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

int main(){
    // EXECUTE_FASTER;
    testcase{
        int n,k,count = 0,answer = 0;
        cin >> n >> k;
        bool flag = true,skip = true;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                count++;
                if(count > k ){
                    // for(int j = i; j < k; j++){
                    //     if(s[i] == '1'){
                    //         skip = false;
                    //     }
                    // }
                    if(flag && skip){
                    answer += 1;
                    count = 0;
                    flag = false;
                    skip = true;
                    }
                    
                } 
            }else{
                flag = true;
                count = 0;
            }
        }
        // if(flag && s.size() <= k || count == k){
        //     answer += 1;
        // }
        count = 0;
        cout << answer << endl;
    }
    return 0;
}