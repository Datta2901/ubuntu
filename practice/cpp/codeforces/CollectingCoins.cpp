//https://codeforces.com/problemset/problem/1294/A
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
    long int a,b,c,n;
    while(t--){
        cin >> a >> b >> c >> n;  
        if((n + b + c - 2 * a) % 3 == 0 && (n + a + c - 2 * b) % 3 == 0 && (n + a + b - 2 *c) % 3 == 0 &&(n + b + c - 2 * a) >=  0 && (n + a + c - 2 * b)  >= 0 && (n + a + b - 2 *c) >= 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}