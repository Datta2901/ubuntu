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
        int n;
        cin >> n;
        vector<int> playlist;
        vector<int> ::iterator it;
        loop(n){
            int a;
            cin >> a;
            playlist.pb(a);
        }

        int pos;
        cin >> pos;
        int ans = playlist[pos - 1];

        sort(playlist.begin(),playlist.end());
        it = find(playlist.begin(),playlist.end(),ans);
        cout << (it - playlist.begin()) + 1 << endl;
    }
    return 0;
}