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
        int n;
        cin >> n;
        int countOdd = 0,countEven = 0;
        vector<int> array;
        loop(0,n-1){
            int a;
            cin >> a;
            array.pb(a);
        }
        for(int i = 0; i < n; i++){
            if( i % 2 != 0 && array[i] % 2 == 0){
                countEven++;
            }else if( i % 2 == 0 && array[i] % 2 != 0){
                countOdd++;
            }
        }
        if(countEven == countOdd){
            cout << countEven << endl;
        }else{
            cout << -1 << endl;
        }  
    }
    return 0;
}