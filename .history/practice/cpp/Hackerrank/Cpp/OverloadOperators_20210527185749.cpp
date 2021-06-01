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
    string num1,num2;
    cin >> num1 >> num2;
    stringstream ss(num1),ss1(num2);
    char ch1 = '+',ch2 = 'i';
    ss >> obj1.a >> ch1 >> ch2 >> obj1.b;
    ss1 >> obj1.a >> ch1 >> ch2 >> obj1.b;
    cin >> obj2.a >> obj2.b;
    answer = obj1 + obj2;
    cout << answer.a << "i" << answer.b << endl;
    return 0;
}