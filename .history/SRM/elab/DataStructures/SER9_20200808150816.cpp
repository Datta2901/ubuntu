// #include<bits/stdc++.h> 
// using namespace std;
// set<int>freq; 
// long long int countDistinctSubarray(vector<int> arr,int size){ 
// long long int count = 0;
//    set<int>sub;
//    for(int i = 0; i < size; i++){ 
//      sub.clear(); 
//     for(int j = i; j < size; j++){
//       sub.insert(arr[j]);
//       if(sub.size() == freq.size()){ 
//         count++;                           
//       }
//     }
//    } 
//    return count;
//  } 
// int main(){
//   int size; 
//   cin >> size; 
//   vector<int> number;
//   for(int i = 0; i < size; i++){
//     int a; cin >> a;
//     number.push_back(a); 
//     freq.insert(a);
//   } 
//   cout << countDistinctSubarray(number,number.size()) << endl; 
//   return 0; 
//   }

#include<bits/stdc++.h>
#define ll long long
#define f(i,s,n) for(ll i=s;i<n;i++)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    S s;
    f(i,0,n){
    cin>>a[i];
    s.insert(a[i]);
    }
    ll k=s.size();
    UM <ll,ll> m;
    m.clear();
    ll r=0,s1=0,w=0;
    f(l,0,n){
    while(r<n&&w<k){
        m[a[r]]++;
        if(m[a[r]]==1)
            w++;
            r++;
        }
        if(w==k)
            s1=s1+n-r+1;
            m[a[l]]--;
        if(m[a[l]]==0)
            w--;
}
cout<<s1;
}