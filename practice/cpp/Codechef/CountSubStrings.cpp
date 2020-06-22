// https://www.codechef.com/problems/CSUB
#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(s,e) for(int i = s; i <= e; i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        string :: iterator it;
        for(int i = 0; i < str.size(); i++){
            for(int j = 1; j <= str.size() - i; j++){
                // cout << "number of substrings from " << i << " to " << j  << "  is  "  ;
                // cout << str.substr(i,j) << endl;
                string a;
                a = str.substr(i,j);
                if(a[0] == '1' && a[a.size()- 1] == '1'){
                    count++;
                }
            }
        }

        cout << count << endl;
        // time complexity is O(n*n)
        // you can also find number 1 s ansd then n * (n+1)/2 will give you same answer in time complexity in O(n)
    }


    return 0;
}