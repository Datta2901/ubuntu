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
    int maximum1 = 0,maximum2 = 0;
    while(t--){
       Details obj;
        cin >> obj.name >> obj.mark;
        if(maximum1 < obj.mark){
            maximum2 = maximum1;
            maximum1 = obj.mark;
        }
        number.push_back(obj);
    }
    sort(number.begin(),number.end(),comparator);
    cout << "Ordered List" << endl;
    for(auto x : number){
        cout << obj.name << " " << obj.mark << endl;
    }
    cout << "Second Highest mark is " << maximum2 << end
    return 0;
}