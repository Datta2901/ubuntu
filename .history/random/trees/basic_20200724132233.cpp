#include<bits/stdc++.h>
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
using namespace std;
int lca(map<int,int> parent,int a,int b){
    vector<int> common;
    if(parent[a] == b){
        return b;
    }if(parent[])
    int i = a;
    while(parent[i] != 0){
        common.push_back(parent[i]);
        i = parent[i];
    }
    bool flag = true;
    if(parent[b] == a){
        return a;
    }
    i = b;
    while(flag){
        vector<int>::iterator it = find(common.begin(),common.end(),parent[i]);
        if(it- common.begin() == common.size()){
            i = parent[i];
        }else{
            return parent[i];
        } 
    } 
}
int main(){
    cout << "Enter the size\n";
    int size;
    cin >> size;
    map<int,vector<int> > tree;
    map<int,int> parent;
    cout << "Enter the connections of a tree\n";
    for(int i = 0; i < size; i++){
        int a,b;
        cin >> a >> b;
        tree[a].push_back(b);
        parent[b] = a;
    }

    // for(map<int ,vector<int> > :: iterator it = tree.begin(); it != tree.end(); it++){
    //     cout << it->first << "  : ";
    //     for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){
    //         cout << *ip << " ";
    //     }
    //     cout << endl;
    // }
    printMap(map,parent,int,int);
    cout << "Enter the queries \n";
    int q;
    cin >> q;
    while(q--){
        int a,b,answer;
        cout << "Enter two nodes\n";
        cin >> a >> b;
        answer = lca(parent,a,b);
        cout << answer << endl; 
    }
    return 0;
}