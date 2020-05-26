#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<tuple<int,int,int>> data;
    for(int i = 0, j =0; i < 3; i++,j++){
        data.push_back(tuple<int,int,int> {i,j,i});  
        cout << get<0>(data.at(i)) << " " << get<1>(data.at(i)) << " " << get<2>(data.at(i)) << endl;
    }
    return 0;
}