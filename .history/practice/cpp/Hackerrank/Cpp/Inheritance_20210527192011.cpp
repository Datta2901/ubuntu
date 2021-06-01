#include<bits/stdc++.h>
using namespace std;

class Triangle{
    public:
        void triangle(){
            cout<<"I am a triangle\n";
        }
};

class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
            
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
    isc.triangle();
    return 0;
}

int main(){
    return 0;
}