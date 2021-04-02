
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
 
//   precompute();
 
//   int t; cin>>t;
//   while(t--){
//     solve();
//   }
 
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define N 10000001
bool arr[N];
int ansarray[N];
void fun(){
    memset(arr,true,N*(sizeof(bool)));
    arr[0] = false;
    arr[1] = false;
    for(int i =4;i<N;i+=2){
        arr[i] =false;
    }
    for(int i =3;i*i<N;i++){
        if(arr[i]){
             for(int j = i*i;j<N;j+=i){
                arr[j] = false;
             }
        }
    }
    ansarray[0]=0;
    ansarray[1] =0;
    int ans =0;
    for(int i =2;i<N;i++){
        if(arr[i] ==true && arr[i-2]==true){
            ans++;
            ansarray[i]=ans;
        }else{
            ansarray[i]=ans;
        }
    }
    return;
}
int main()
 {
    fun();
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int ans = 0;
        if(b<5){
            cout<<ans<<endl;
            continue;
        }
        cout<<ansarray[b]<<endl;
    }
	return 0;
}