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
        int n,k,ChefWeight = 0,sonWeight = 0;
        cin >> n >> k;
        vector<int> weight;
        loop(n){
            int a;
            cin >> a;
            weight.pb(a);
        }

        sort(weight.begin(),weight.end());
            k=(k<=n-k)?k:n-k;
            loop(k){
                sonWeight += weight[i];
            }
               
            for(int i = k; i < n; i++){

                ChefWeight += weight[i];
            }  
        

        cout << abs(ChefWeight -sonWeight) << endl;
        }
    return 0;
}