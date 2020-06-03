#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getBinary(int n,vector<int> & vect ){
    int c =0,ans = 0;
    for(int a=0,b=0,i=0;n>0;n=n/2,i++){
      a = n/2 ;
      b = n%2 ;
      vect.push_back(b);
    }
}
int getDecimal(vector<int> & binC){
    int n=0,c =0;
   for(int i = binC.size()-1,b = 0; i >=0; i--,b++){
        n += binC[i]*pow(10,b);
    }
    for(int a,i = 0;n > 0; i++,n = n/10){
        a =n%10 ;
        c =(pow(2,i))*a+c ; 
    }
    return c; 
}
int main(){
    int num,answer;
    cin >> num;
    vector<int> data;
    getBinary(num,data);
    answer = getDecimal(data);
    cout << answer << endl;

    return 0 ;
}