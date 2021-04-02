#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 8;
int Answer[N];
int Exist[N];

int main(){
    Exist[0] = Exist[1] = 0;
    for(int i = 2; i <= N; i++){
        Exist[i] = 1;
    }
    for(int i = 2; i < sqrt(N); i++){
        if(Exist[i] == 1){
            for(int j = i * i; j < N; j += i){
                Exist[j] = 0;
            }
        }
    }
     
     
    // for(int i = 1; i <= N; i++){
    //     cout << i << " " << Exist[i] << endl;
    // }
    
    // Time complexity is O(nlog(logn))
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        int count = 0;
        for(int i = 2; i < number; i++){
            if(Exist[2 + i] == true){
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
 
// const int mxN=1e6+5;
// int ans[mxN];
// vector <int> prime(mxN);
 
// void precompute(){
 
//   for(int i=0;i<mxN;i++){
//     prime[i]=true;
//   }
 
//   prime[0]=false;
//   prime[1]=false;
 
//   for(int p=2;p*p<mxN;p++){
//     if(prime[p]){
//       for(int i=p*p;i<mxN;i+=p){
//         prime[i]=false;
//       }
//     }
//   }
 
//   ans[0]=0;
//   ans[1]=0;
 
//   for(int i=2;i<mxN;i++){
//     if(prime[i] && prime[i-2]){
//       ans[i]=ans[i-1]+1;
//     }
//     else ans[i]=ans[i-1];
//   }
// }
 
// void solve(){
//   int n; cin>>n;
//   cout<<ans[n]<<"\n";
// }
 
// int main(){
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
 
//   precompute();
 
//   int t; cin>>t;
//   while(t--){
//     solve();
//   }
 
// return 0;
// }