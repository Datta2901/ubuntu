#include<bits/stdc++.h>
using namespace std;
#define ll long int ;

string getBinary(ll n){
    ll c =0,ans = 0;
    string binary = "";
    for(ll a=0,b=0,i=0;n>0;n=n/2,i++){
      a = n/2 ;
      b = n%2 ;
      binary += b;
    }
    return binary;
}

ll GetMaximumPowerOf2(ll number){
    return(number & (~(number - 1)));
}

ll getDecimal(string binC){
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

int main(){
    int t;
    cin >> t;
    while(t--){
        long int cDec;
        cin >> cDec;
        string cBin = getBinary(cDec);
        string ABin[cBin.size()] = {1},bBin[cBin.size()] = {0};
        for(int i = 0; i < ABin.size(); i++){
            cout << 
        }
    }

    return 0;
}