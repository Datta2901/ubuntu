#include<iostream>
#include<iterator>
#include<string>
#include<map>
#define MOD 1000000007
#define loop(n) for(int i=0;i<n;i++)
#define testcase() int t;cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    testcase(){
        long long int a,b,c;
        cin >> a >> b;
        c = a -b;
        if(c == 1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }
    return 0 ;
 }    