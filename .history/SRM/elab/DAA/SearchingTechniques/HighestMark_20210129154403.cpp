#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Details{
    public:
        string name,mark;
};

int main(){
    int t;
    cin >> t;
    vector<Details> number;
    while(t--){
       Details obj;
        cin >> obj.name >> obj.mark;
        number.push_back(obj);
    }
    sort(number.begin(),number.end(),less_than_key);
    for(auto i : number){
        cout << i.name << endl;
    }
    return 0;
}