//https://codeforces.com/problemset/problem/1234/A
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
        long long int sum = 0;
        cin >> size;
        vector<int> prices;
        loop(size){
            int a;cin >> a;
            prices.pb(a);
            sum += a;
        }
        //  cout<<fixed<<setprecision(0)<<ceil(sum/size)<<endl; or
        cout << (sum + size -1) / size;
    }
    return 0;
}
// or 
   /* val = sum / n;
    if (sum % n != 0)
    {
      val++;
    }
    printf("%d\n", val);*/
