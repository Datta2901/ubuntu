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
    int t;
    cin >> t;
    while(t--){
        long long int a;
        bool flag = false;
        cin >> a;
        for(int x = max((long long int)1,a/4-2 ); x < min(a,a/4 + 2);x++){ 
            cout << x * (a-2 )* 180/a  % 360 << " " ;
            cout << x * (a-2 )* 180/a <<"" "<<endl;
            if( x * (a-2 )* 180/a  % 360 == 90){
               
                cout << "YES\n";
                flag = true;
            }
        }
        if(flag == false){
             cout << "NO\n";
        }  
    }
    return 0;
}

  