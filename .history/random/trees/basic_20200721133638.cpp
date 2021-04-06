#include<bits/stdc++.h>
using namespace std;
int lca(map<int,vector<int> > tree,int )
int main(){
    int size;
    cin >> size;
    map<int,vector<int> > tree;
    for(int i = 0; i < size; i++){
        int a,b;
        cin >> a >> b;
        tree[a].push_back(b);
    }

    for(map<int ,vector<int> > :: iterator it = tree.begin(); it != tree.end(); it++){
        cout << it->first << "  : ";
        for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){
            cout << *ip << " ";
        }
        cout << endl;
    }



    return 0;
}