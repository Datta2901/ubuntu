//https://codeforces.com/problemset/problem/1296/A
//codeforces array with odd sum
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
        cin >> size;
        int odd = 0,even = 0,sum = 0;        
        vector<int> numbers;
        loop(size){
            int a;
            cin >> a;
            numbers.pb(a);
            sum += a;
            if(a % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }

        if(sum % 2 != 0){
            cout << "YES" << endl;
        }else if(even > 0 && odd > 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}