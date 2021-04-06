#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int>parselnts(string str);
    for(int i = 0; i < str.size();i++){
      	if(str[i] != ','){
        	cout << str[i];
        }else{
        	cout << endl;
        }
	
    }
    return 0;
}