#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string subject,verb;
        cin >> subject >> verb;
        if(subject == "I"){
            cout << subject << " " << verb << endl;
        }else{
            if(verb[verb.size()-1] == 'o'){
                cout << subject << " " << verb << "es" <<  endl;
                continue;
            }if((verb[verb.size()-2] == 'c' || verb[verb.size()- 2] == 's') && verb[verb.size()-1] == 'h'){
                cout << subject << " " << verb << "es" <<  endl; 
                continue;
            }
            if(verb[verb.size() - 1] != 'a' || verb[verb.size() - 1] != 'e'|| verb[verb.size() - 1] != 'i'||verb[verb.size() - 1] != 'u'){

            }
            if(verb[verb.size() - 1] == 'y' ){
                verb[verb.size() - 1] = 'i';
                cout << subject << " " << verb << "es" <<  endl; 
            }else{
                cout << subject << " " << verb << "s" <<  endl;
            }
        }
    }
    return 0;
}
