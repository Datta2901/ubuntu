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

// 1
// 5 5
// 1 1 1 1 5
// 2
// 1 1 1 1 1
// 1
// 1 1 2 2 1
// 1
// 1 2 1 2 5
// 0
// 1 3 1 3 5
// 0
// 1 4 1 4 5
// 1
// 1 4 1 1 4
// 1
// 1 4 2 2 4

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p;
        int x,c,count = 0;
        cin >> n >> p;
        vector< vector<int> > pattern(n,vector<int> (n,0));
                for(int i = 0; i < n; i++){
                    cout  << 1 << " " << i + 1 <<" " << 1 << " " << i + 1 << " "<< n << endl;
                    cin >> x;
                    count = 0;
                    for(int j = 0; j < n; j++){
                        if(x == 0){
                            continue;
                        }
                        if(x == n){
                            for(int j = 0; j < n; j++){
                                pattern[i][j] = 1;
                            }
                            break;
                        }
                        if(x - count  == n - j){
                            for( j = j; j < n; j++){
                                pattern[i][j] = 1;
                            }
                            break;
                        }
                        cout << 1 << " " << i+1 << " " << j+1 <<" " << i+1<<" " <<  j+1 << endl;
                        cin >> c;
                
                        if(c == 1 && count <= x){
                             pattern[i][j] = 1;
                             count++;
                             if(count == x){
                             break;
                            }
                        }
                    
                }
               continue;
        }

            cout << 2 << endl;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout << pattern[i][j] << " " ;
                }
                cout << endl;
            }
            cin >> x;
    }

    return 0;
}