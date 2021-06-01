#include<bits/stdc++.h>
using namespace std;

class Complex
{
    public:
        int a,b;
    Complex operator +(const Complex& obj){
        Complex answer;
        answer.a = a + obj.a;
        answer.b = b + obj.b;
        return answer;
    }
};



int main(){
    Complex obj1,obj2,answer;
    cin >> obj1.a >> obj1.b;
    cin >> obj2.a >> obj2.b;
    answer = obj1 + obj2;
    cout << answer.a <<"i"<<
    return 0;
}