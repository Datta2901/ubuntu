#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){
EXECUTE_FASTER    
int t;
cin>>t;
while(t--){
    long long int n,m;
    cin>>n>>m;
    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2){
        cout<<m<<endl;
    }
    else{
        cout<<2*m<<endl;
    }
}
return 0;
}