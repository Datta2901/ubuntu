#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i = n-1; i >= 0; i-- )
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define ll long long int

void getBinary(ll n,vector<ll> & vect ){
    ll c =0,ans = 0;
    for(ll a=0,b=0,i=0;n>0;n=n/2,i++){
      a = n/2 ;
      b = n%2 ;
      vect.insert(vect.begin(),b);
    }
} 

ll getDecimal(vector<ll> & binC){
    ll n=0,c =0;
   for(ll i = binC.size()-1,b = 0; i >=0; i--,b++){
        n += binC[i]*pow(10,b);
    }
    for(ll a,i = 0;n > 0; i++,n = n/10){
        a =n%10 ;
        c =(pow(2,i))*a+c ; 
    }
    
    return c;
}

void cal(ll a,ll b,ll c){
    if ((a & c) == 0 or (b & c) == 0){
        cout << 0 << endl;
    }
    else{
        cout << c << endl;
    }  

}
void checkMaxCommon(vector<ll> binC,vector<ll> binR,int *k){
    int i;
    for(i = 0; binC[i] == binR[i]; i++){
    }
    k = &i;
}
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    ll a,b,l,r,c,d;
    while(t--){
        cin >> a >> b >> l >> r ;
        c = a | b;
        if( c <= r){
            cal(a,b,c);
            continue;
        }

        vector<ll> left,binR,binC,answer;
        getBinary(c,binC);
        getBinary(r,binR);
        int k;
        checkMaxCommon(binC,binR,&k);

        for(int i = 0; i < k; i++){
            answer.insert(answer.begin(),binR[i]);
        }
        answer.insert(answer.begin(),0);
        for(ll i = answer.size(); i < binC.size();i++){
            answer.push_back(binC[i]);
        }

        c = getDecimal(answer);
        if( c <= r){
            cal(a,b,c);
            continue;
        }




    }
    return 0;
}