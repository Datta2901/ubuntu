#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Sports{
    public:
        string roll;
        virtual void getdata(){
            cin >> roll;
        }
        virtual void display(){
            cout << "#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    return 0;
}" <<  roll << endl;
        }
};

class Student:public Sports{
    public:
        string name;
        void getdata(){
            cin >> name;
        }
        void display(){
            cout << "" << name << endl;;
        }
};

int main(){

    return 0;
}