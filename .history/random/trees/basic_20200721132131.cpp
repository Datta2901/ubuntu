#include<bits/stdc++.h>
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

    for(map<int ,vector<int> > :: iterator it = tree.begin(); it != tree.end(); it++)


    return 0;
}