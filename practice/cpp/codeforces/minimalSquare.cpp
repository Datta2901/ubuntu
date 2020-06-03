//https://codeforces.com/problemset/problem/1360/A
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
    int a,b;
    while(t--){
        cin >> a >> b;
        if(a == b){
            a = 2 * a;
            b = 2 * b;
        }else if(a > b){
            a += 1;
            b = 2 * b;
        }else{ 
            b += 1;
            a = 2 * a;
        }
        cout << a * b << endl;

    }
    return 0;
}