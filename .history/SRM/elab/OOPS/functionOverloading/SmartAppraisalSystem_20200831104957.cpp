#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Appraisal{
    public:
        int sal;
        Appraisal(){
            sal = 30000;
        }
        Appraisal(int a){
            sal = a;
        }
};


int main(){
    Appraisal myobj,myobj2;
    cout << "Old Salary : "<<  myobj.sal << endl;
    

    return 0;
}