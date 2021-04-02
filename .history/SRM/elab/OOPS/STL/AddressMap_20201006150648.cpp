#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    map<int,int> mymap;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        int a,b;
        cin >> a >> b;
        mymap.insert({a,b});
    }
    int key_to_deleted;
    cin >> key_to_deleted;
    mymap.erase(key_to_deleted);
    for(auto it = mymap.begin(); it !=mymap.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}