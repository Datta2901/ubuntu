#include<bits/stdc++.h>
using namespace std;
#define ll long int 

string getBinary(ll n){
    ll a =0,b = 0;
    string binary = "\0";
    while(n > 0){
      b = n % 2 ;
      binary += to_string(b);
      n = n/2 ;
    }
    reverse(binary.begin(),binary.end());
    cout << binary << endl;
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
        long int ans = GetMaximumPowerOf2(cDec);
        int diff = cDec - pow(2,ans);
        if(diff == 0){
            ans++;
        }
        string cBin = getBinary(cDec);
        string ABin[cBin.size()],bBin[cBin.size()];
    }

    return 0;
}