// https://www.codechef.com/problems/STONES
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
    EXECUTE_FASTER;
    testcase{
        string a;
        cin >> a;
        vector<char> stone;
        set<char> jewel;
        loop(0,a.size()-1){
            jewel.insert(a[i]);
        }

        cin >> a;
        loop(0,a.size()-1){
            stone.pb(a[i]);
        }
        int count = 0;
        for(set<char>:: iterator it = jewel.begin(); it != jewel.end(); it++){
            rep(stone.size(),j){
                if(*it == stone[j] && count < stone.size()){
                    count++;
                }
            }
        }

        cout << count << endl;
        // time complexity of this problem is O(jewel.size()*stone.size())
    }
    return 0;
}



