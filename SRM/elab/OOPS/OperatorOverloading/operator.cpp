#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class mystring{
    public:
        string name;
        mystring(string a){
            name = a;
        }
        void operator !(){
            for(int i = 0; i < name.size(); i++){
                if (islower(name[i])){  
                    name[i] = toupper(name[i]); 
                }
                else if (isupper(name[i])){  
                    name[i] = tolower(name[i]); 
                }
            }
        }
        void operator==(mystring&){
            cout << name << endl;
        }
};

int main(){
    string name;
    cin >> name;
    mystring s1(name),s2(name);
    !s1;
    s2 == s1;
    return 0;
}