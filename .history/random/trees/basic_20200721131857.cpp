#include<bits/stdc++.h>
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
using namespace std;
int main(){
    int size;
    cin >> size;
    map<int,vector<int> > tree;
    for(int i = 0; i < size; i++){
        int a,b;
        cin >> a >> b;
        tree[b].push_back(a);
    }



    return 0;
}