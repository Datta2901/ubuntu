#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Appraisal{
    public:
        int sal;
        Appraisal(){
            sal = 30000;
        }
        Appraisal(a){
            sal = a;
        }
};


int main(){
    Appraisal myobj;
    cout << "Old Salary : "<<  myobj.sal << endl;
    int a;
    cin >> a;
    Appraisal myobj2(a);
    cout << "New Salary : " << myobj2(a).sal << endl;

    return 0;
}