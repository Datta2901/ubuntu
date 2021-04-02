#include<bits/stdc++.h>
using namespace std;
int lca(map<int,int> parent,int a,int b){
    vector<int> common;
    if(parent[a] == b){
        return b;
    }
    int i = a;
    while(parent[i] != 0){
        common.push_back(parent[a]);
        i = parent[a];
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
    printVect()
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