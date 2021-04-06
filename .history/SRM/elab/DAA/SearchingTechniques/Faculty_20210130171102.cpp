#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Details{
    public:
        string name,phone,year;
};

int main(){
    int t;
    cin >> t;
    vector<Details> number;
    while(t--){
       Details obj;
        cin >> obj.name >> obj.phone >> obj.;
        number.push_back(obj);
    }
    string required;
    bool skip = true;
    cin >> required;
    for(auto i : number){
        if(i.name == required){
            cout <<"Name Mobile Number "<< endl;
            cout << i.name << " " << i.phone << " " << i. << endl;
            skip = false;
            break;
        }
    }
    if(skip){
        cout << "The Entered Name is not in the Directory"<< endl;
    }
    return 0;
}