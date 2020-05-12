#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void binaryConvertion(ll n,vector<ll> & vect ){
    ll c =0,ans = 0;
    for(ll a=0,b=0,i=0;n>0;n=n/2,i++){
      a = n/2 ;
      b = n%2 ;
      c= ((pow(10,i))*b)+c;
    }

    for(; c != 0; c= c/10){   
         ll a = c % 10 ;
          ans=ans*10+ a ;  
      }

    for(;ans > 0; ans = ans /10){
        vect.insert(vect.begin(),ans % 10);
    }
 
}


void isgreaterThanRight(vector<ll> & right,vector<ll> & answer){
    for(int i = 0; i < right.size(); i++){
        if(right[i] == 1 ){
            if(answer[i] == 1){
                ;
            }else{
                answer[i] == 0;
                break;
            }
        }
    }
    
}


void islesserThanleft(vector<ll> & left,vector<ll> &answer){
    for(int i = 0; i < left.size();i++){
        if(left[i] == 1){           
            if(answer[i] == 0){
                answer[i] =1;
            }else{
                break;           
            }
        }
    }       


}           

bool CheckgreaterthanRight(vector<ll> right,vector<ll> answer){
    for(int i = 0; i < right.size(); i++){
        if(answer[i] == 1 && right[i] != 0  ){
            return false;
        }
    }
    return true;
}

bool ChecklesserthanLeft(vector<ll> left,vector<ll> answer){
    for(int i = 0; i < left.size(); i++){
            if(answer[i] == 1 ){
                if( left[i] != 0  ){
                    return false;
            }
        }
    }
    return true;
}

ll binaryToDecimal(vector<ll> answer){
    ll n = 0,c;
    for(vector<ll> :: iterator it = answer.begin(); it !=answer.end(); it++){
     n += *it * 10;
    }
    for(ll i = 0,c = 0;n > 0; i++,n = n/10)
    {
     ll  a =n%10 ;
    c =(pow(2,i))*a+c ;
    }
    return c;
}

int main(){
    int t;
    bool flag = true,skip=true ;
    cin >> t;
    ll a,b,l,r,c,answer ,Z=0;
    while(t--){
        cin >> a >> b >> l >> r ;
        c = a | b;
        if( c >= l && c <= r){
            cout << c << endl;
            continue;
        }
        vector<ll> left,right,answer;
        binaryConvertion(c,answer);
        binaryConvertion(l,left);
        binaryConvertion(r,right);
        cout << c << endl;
        for(vector<ll> :: iterator it =answer.begin(); it != answer.end(); it++){
            cout << *it;
        }

        if(right.size() != answer.size()){
            for(int i = 0; ; i++){
                answer[i] = 0;
                if( right[i] == 1){
                    answer[i] =1; 
                    break;
                }
            }
        }

       
        if(left.size() != answer.size()){
            for(int i = 0; ; i++){
                answer[i] = 0;
                if( left[i] == 1){
                    answer[i] =1; 
                    break;
                }
            }
        }

   
    while(flag){
        isgreaterThanRight(right,answer);
        flag = CheckgreaterthanRight(right,answer);
        if(flag){
            break;
        }
    }

     while(skip){
         islesserThanleft(left,answer);
         skip = ChecklesserthanLeft(left,answer);
         if(skip){
             break;
         }
     }   


    Z = binaryToDecimal(answer);
    cout << endl << Z << endl;
  
    }
}           