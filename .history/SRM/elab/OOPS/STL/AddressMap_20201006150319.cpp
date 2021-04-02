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
    int a;
    cin >> a;
    mymap.erase(a);
    

    return 0;
}