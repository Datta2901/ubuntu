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
    int t,size;
    cin >> t;
    while(t--){
        int sum = 0,sumb = 0,suma = 0;
        cin >> size;
        vector<int> bob,alice;
        loop(size){
            int a;
            cin >> a;
            bob.pb(a);
        }loop(size){
            int a;
            cin >> a;
            alice.pb(a);
        }loop(size){
           
            if( bob[i] == alice[i] && suma == sumb){
                sum += bob[i]; 
            }

            suma += alice[i];
            sumb += bob[i];
        }
    cout << sum << endl;
    }
    return 0;
}