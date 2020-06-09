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
    int t;
    cin >> t;
    while(t--){
        int n,p;
        int x,count = 0;
        cin >> n >> p;
        cout << 1<<" " << 1 << " " << 1 << " " << 60 << " " << 60 << endl;
        cin >> x;
        cout << 2 << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if( i == j && count <= x){
                    cout << 1 <<" ";
                    count++;
                }else{
                    cout << 0 << " ";
                }   
            }
            cout << endl;
        }
        cin >> x;


    }









    return 0;
}