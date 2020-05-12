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

ll fvalue(ll a,ll b,ll c){
    return (a & c) * (b & c);
}

bool IsFirstGreaterThanSecond(vector<ll> num1, vector<ll>num2){
    if(num1.size() > num2.size()){
        return true;
    }
        
    else if (num2.size() > num1.size()){
        return false;
    }
        
    
    // for( ll i : num1){
    //     if (num1[i] == num2[i]){
    //         continue;
    //     }     
    //     else if( num1[i] == 1){
    //         return true;
    //     } 
    // return false;
    // }
        
       
    
}
int main()
{
    EXECUTE_FASTER
    int t;
    cin >> t;
    ll a,b,l,r,c,d;
    while(t--){
        cin >> a >> b >> l >> r ;
        if(l == 0 && r == 0){
            cout << 0 << endl;
            continue;
        }
        c = a | b;

        if( c <= r){
            cal(a,b,c);
            continue;
        }

        vector<ll> left,binR,binC;
        getBinary(c,binC);
        getBinary(r,binR);

        ll sizeDiff = binC.size() - binR.size();
        if(sizeDiff > 0){
            loop(sizeDiff){
                binC.erase(binC.begin()+i);
            }
        }
    
        ll decC = getDecimal(binC);
        ll decR = getDecimal(binR);

        if(IsFirstGreaterThanSecond(binR,binC)){
            cal(a,b,decC);
            continue;
        }
        ll tempAns = decC & decR;

            binC.erase(binC.begin());

            decC = getDecimal(binC);

            if(fvalue(a,b,tempAns) > fvalue(a,b,decC)){
                cout << tempAns << endl;
                continue; 
            }
            cal(a,b,decC);        
     }

    return 0;
}