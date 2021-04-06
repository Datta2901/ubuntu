#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float a = 0, b = 0,c =0;
    try{
        cin >> a >> b >> c;
        if(cin){
            float answer = a *pow((1 + 0.01* b),c);
            cout << "Compound Interest is:" <<answer - a;

        }else{
            throw(false);
        }
    }catch(bool){
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

    }
    return 0;
}