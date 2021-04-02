#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Store{
  public:
	int itemcount(int id){
    	return id;
    }
  int itemcount(int totalavl,int consumed){
  	return totalavl - consumed;	
  }
};
   
int main(){
    Store ob;
    int a,b,c;
    cin >> a >> b >> c;
    cout << ob.itemcount(a)   << endl;
    cout << ob.itemcount(b,c) << endl;
    return 0;
}