//https://codeforces.com/problemset/problem/1300/A
// nonZero codeforces
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
        int sum = 0,count = 0;
        vector<int> numbers;
        loop(size){
            int a; cin >> a;
            if(a == 0){
                a += 1;
                count++;
                numbers.pb(a);
            }else{
                numbers.pb(a);
            }
            sum += a;
        }
        if(sum == 0){
            count++;
        }
        cout << count << endl;
    }
    return 0;
}