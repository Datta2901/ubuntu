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
    bool skip = true;
    cin >> required;
    for(auto i : number){
        if(i.name == required){
            cout <<"Name Mobile Number City"<< endl;
            cout << i.name << " " << i.phone << " " << i.city << endl;
            skip = false;
            break;
        }
    }
    if(skip){
        cout << "The Entered Name is not in the Directory0"
    }
    return 0;
}