#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    public:
        void identity(char name[100],iny id){
            cout << name << " " << id << endl;
        }
        void identity(string id,char name[100]){
            cout << name << " " << id << endl;
        }
};

int main(){
    char a[100],c[100];
    string b,d;
    cin >> a >> b >> c >> d;
    Student s1;
    s1.identity(a,b);
    s1.identity(d,c);
    return 0;
}