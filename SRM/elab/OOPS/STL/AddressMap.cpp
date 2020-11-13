#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main(){
   
    int size;
    cin >> size;
  	map<int,int>mymap;
    for(int i = 0; i < size; i++){
        int a,b;
        cin >> a >> b;
        mymap.insert({a,b});
    }
    int key_to_deleted;
    cin >> key_to_deleted;
    mymap.erase(key_to_deleted);
  	map<int,int>::iterator it;
    for(it= mymap.begin(); it !=mymap.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}