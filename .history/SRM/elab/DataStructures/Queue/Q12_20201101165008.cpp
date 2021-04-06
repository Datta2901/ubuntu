#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int FIND(int,int){
	int a = 0;
  	a = a + 1;
    return a;  
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(abs(a - b) == 1 ){
            cout << "yes" << endl;
            continue;
        }
        a = a % 3;
        b = b % 3;
        if(abs(a - b) == 1 ){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}