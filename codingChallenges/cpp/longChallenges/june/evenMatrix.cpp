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
#define testcase int t; cin >> t; while(t--)

int main(){
    EXECUTE_FASTER
    testcase{
         int n,count = 1;
        cin >> n;
        vector<int> pattern;
        if(n % 2 != 0){
            for(int i = 1; i <= n * n; i++){
                cout << i << " ";
                if(i % n == 0){
                    cout << endl;
                }
            }
        }else{
            for(int i = 1; i <= n * n; i++){
                if(count % 2 == 1){
                     cout << i << " ";
                }
                if(i % n == 0){
                    reverse(pattern.begin(),pattern.end());
                    printVect(pattern,int);
                    cout << endl;
                    count++;
                    pattern.clear();
                }
                if(count % 2 == 0){
                    pattern.pb(i + 1);
                }
            }
        }

        
        

    }
    return 0;
}