#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class details{
    public:
        string name,number;
};

int main(){
    bool skip = false;
    for(int i = 0; i < 10; i++){
        details obj;
        cin >> obj.name >> obj.number;
        if(obj.name == "Datastructures"){
            skip = true;
            break;
        }
    }
    if(skip){
        cout << "Datastructures book is not available" << endl;
    }else{
        cout << 
    }

    return 0;
}