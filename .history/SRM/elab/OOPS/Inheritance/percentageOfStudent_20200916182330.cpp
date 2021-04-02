#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class AddData{
    public:
        int a,b,c;
        void accept_details(){
            cin >> a >> b >> c;
        }
};

class Total:public AddData{
    public:
        int total;
        void total_of_three_subjects(){
            total = a + b + c;
        }  
};

class Percentage :public Total{
    public:
        int percentage;
        void calculate_percentage(){
            percentage = total/3;
        }
        void show_result(){
            cout << percentage << endl;
        }
};

int main(){
    Percentage p;
    p.accept_details();
    p.total_of_three_subjects();
    p.calculate_percentage();
    p.show_result();
    return 0;
}