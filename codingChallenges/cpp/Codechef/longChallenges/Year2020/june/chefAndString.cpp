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
        string s;
        cin >> s;
        int count = 0;
        loop1(s.size()){
            if(s[i-1] == 'x' && s[i] =='y' ){ 
                count++;
                i++;
            }else if(s[i-1] == 'y' && s[i] =='x' ){
                count++;
                i++;
            }
        }
        cout << count << endl; 
    }
    return 0;
}