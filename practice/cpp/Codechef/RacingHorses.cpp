#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        int n,small;
        cin >> n;
        vector<int> horses,ability;
        loop(n){
            int a;
            cin >> a;
            horses.pb(a);
        }
        sort(horses.begin(),horses.end());
        
        loop1(n){
            ability.pb(horses[i] - horses[i-1]);
        }
        cout << *min_element(ability.begin(),ability.end());
    }
    return 0;
}