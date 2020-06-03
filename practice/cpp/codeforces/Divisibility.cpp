//https://codeforces.com/problemset/problem/1328/A
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
        int a, b,c;
        cin >> a >> b ;
        c = a % b;
        if(c == 0){
            cout << 0 << endl;
            continue;
        }
        cout << b - c << endl;
    }
    return 0;
}