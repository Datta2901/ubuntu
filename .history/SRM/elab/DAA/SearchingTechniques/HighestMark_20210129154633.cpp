#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Details{
    public:
        string name,mark;
};

bool comparator(const Details& lhs, const Details& rhs) {
   return lhs.name < rhs.name;
}

int main(){
    int t = 10;
    vector<Details> number;
    int maximum = 0;
    while(t--){
       Details obj;
        cin >> obj.name >> obj.mark;
        if(max < obj.)
        number.push_back(obj);
    }
    sort(number.begin(),number.end(),comparator);
   
    return 0;
}