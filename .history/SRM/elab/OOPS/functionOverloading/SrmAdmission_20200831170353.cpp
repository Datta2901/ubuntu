#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    public:
        void identity(string name,string id){
            cout << name << " " << id << endl;
        }
        void identity()
};

int main(){
    char a,b,c,d;
    cin >> a >> b >> c >> d;
    Student s1;
    s1.identity(a,b);
    s1.identity(d,c);
    return 0;
}