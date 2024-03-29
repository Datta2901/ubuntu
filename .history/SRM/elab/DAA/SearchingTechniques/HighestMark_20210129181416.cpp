#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Details{
    public:
        string name,
        int mark;
};

bool comparator(const Details& lhs, const Details& rhs) {
   return lhs.mark > rhs.mark;
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
        cout << x.name << " " << x.mark << endl;
    }
    cout << "Second Highest mark is " << maximum2 << endl;
    return 0;
}