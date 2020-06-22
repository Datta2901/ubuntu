#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        int size,answer;
        cin >> size;
        vector<int> recipes;
        vectInput(recipes,size);
        int a = recipes[0];
        loop1(size){
          answer = __gcd(recipes[0], recipes[i]) ;
          recipes[0] = answer;
        }
        cout << a /answer << " ";
        loop1(size){
          cout << recipes[i]/answer << " ";
        }
        cout << endl;
    }
    return 0;
}