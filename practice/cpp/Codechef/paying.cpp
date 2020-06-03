#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define pb push_back
#define endl '\n'
using namespace std;
void solve(int a,vector<int> money){

}
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    int size,value;
    while(t--){
        vector<int> money;
        cin >> size >> value;
        loop(size){
            int a;
            cin >> a;
            if(a <= value){
                money.pb(a);
            }
        }
        solve(value,money);
        

    }
    return 0;
}