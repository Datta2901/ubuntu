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
    testcase{
        int n,p,q = 0,r1 = 1,r2 = 1,c1 =1,c2 =1,x,total,count = 0 ;
        cin >> n >> p;
        vector<int> pattern;
        cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
        cin >> total;
        loop(n * n ){
            if(total == count){
                pattern.pb(0);
                continue;
            }
            cout << 1 <<" " << r1 <<" "  << c1 << " " << r2 << " "<< c2 << endl;
            if((c1) == n ){
                c1 = 1,c2 = 1;
                r1++,r2++;
            }else{c1++,c2++;}
            cin >> x;
            if(x >= 0){
                pattern.pb(x);
                if(x == 1){
                    count++;               
                }
            }else{
                return 0;
            }
        }

        cout << 2 << endl;
            for(int i = 0; i < n *n; i++){ 
                cout << pattern[i] << " ";
                if( ((i + 1) % n) == 0){
                    cout << endl;
                }
               
            }
        pattern.clear();
        cin >> x;
        if( x == 1){
            ;
        }else{
            return 0;
        }


    }
    return 0;
}