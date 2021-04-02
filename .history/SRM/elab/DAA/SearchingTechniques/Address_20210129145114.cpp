#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Details{
    public:
        string name,phone,city;
};

int main(){
    int t;
    cin >> t;
    vector<Details> number;
    while(t--){
       Details obj;
        cin >> obj.name >> obj.phone >> obj.city;
        number.push_back(obj);
    }
    string required;
    cin >> required;
    for(auto i : number){
        if(i.name == required){}
    }

    return 0;
}