#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    public:
        void identity(char name[100], int id){
            cout << name << " " << id << endl;
        }
        void identity(int id, char name[100]){
            cout << name << " " << id << endl;
        }
};

int main(){
    char a[100],c[100];
    int b,d;
    cin >> a >> b >> d >> c;
    Student s1;
    s1.identity(a,b);
    s1.identity(d,c);
    return 0;
}