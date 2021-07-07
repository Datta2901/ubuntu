#include<bits/stdc++.h>
using namespace std;

bool validate(string tag){
    for(int i = 0; i < tag.size(); i++){
        int asci = int(tag[i]);
        if((97 <= asci && asci <= 122)|| ((48 <= asci && asci <= 57))){
            // do nothing
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string tag;
        cin >> tag;
        if(tag.size() <= 3){
            cout << "Error" << endl;
            continue;
        }
        if(tag[0] == '<' and tag[1] == '/' and tag[tag.size() - 1] == '>'){
            if(validate(tag.substr(2,tag.size() - 3))){
                cout << "Success" << endl;
            }else{
                cout << "Error" << endl;
            }
        }else{
            cout << "Error" << endl;
        }
    }
    return 0;
}