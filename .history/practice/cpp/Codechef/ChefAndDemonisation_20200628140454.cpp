#include<bits/stdc++.h>
#include<vector>
#include<iostream> 
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it =  it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007;
#define ll long long int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e) for(int i = 0; i < e;i++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sov.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

int main(){
    EXECUTE_FASTER
    testcase(){
        long int price,value;
        long long int answer = 0;
        cin >> price >> value;
        while(price != 0){
            answer += (price / value);
            price = price % value;
            if(value - 2 > 0){
                value -= 2;
            }else{
                value = 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{EXECUTE_FASTER
   long int  t;
   cin>>t;
   while(t--)
   {
      long int  n,s;
      cin>> s >> n;
      long ans = s/n, rem=s%n;
      if(rem == 0)
         cout<< ans<<endl;
      else if(rem %2 ==0 || rem ==1)
         cout<< ans + 1<< endl;
      else cout<< ans + 2<< endl;
   }
	return 0;
}