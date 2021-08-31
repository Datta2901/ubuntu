
#include <bits/stdc++.h>
using namespace std;

bool check(int x,int k){
    int s=0;
    int r;
    while(x!=0){
        r=x%10;
        s=s+r;
        x=x/10;
    }
    if(s%k==0)
        return true;
    return false;
}


int main(){
   int n,k;
   cin>>n;
   cin>>k;
   int c=0;
    for(int i=1;i<=n;i++){
        if(i%k!=0 && check(i,k)){
            c++;
        }
    }
        cout<<c;
    return 0;
}


