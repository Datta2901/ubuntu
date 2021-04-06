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
    int key_to_delete;
    cin >> key_to_delete;
    mymap.erase(key_to_delete);
    for(auto it = mymap.begin(); it !=mymap.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}