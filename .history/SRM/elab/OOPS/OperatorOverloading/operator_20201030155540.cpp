#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class mystring{
    public:
        string name;
      	void a(){
        	cin >> name;
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
        void operator ==(mystring&){
            cout << name << endl;
        }
};

int main(){
    string name;
    mystring s1,s2;
  	s1.a();
    !s1;
    s1 == s2;
    return 0;
}