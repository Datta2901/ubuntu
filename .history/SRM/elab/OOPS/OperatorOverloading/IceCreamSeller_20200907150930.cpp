#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class matrix{
    public:
    int sa,sb,la,lb;
    double sanswer = 0,Lanswer = 0;
    void get(){
        cin >> sa >> la >> sb  >> lb;
    }

    void operator *(){
        sanswer += (0.75 * (sa + sb));
        Lanswer += (1.25 *(la + lb));
    }

    void put(){
        cout << sanswer << endl;
        cout << Lanswer << endl;
    }
};

int main(){
    matrix obj;
    obj.get();
    obj.operator*();
    obj.put()


    return 0;
}