#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
float p,r,n;
   try{   
       cin>>p>>r>>n;
       if(cin){
        float amt = p * pow((1+(r/100)),n);
        cout<<"Compound Interest is:"<<amt-p;
        }else{
            throw p;
        }
    }catch(...){
       cout<<"Invalid input. Try again";
    }
 return 0;
}
