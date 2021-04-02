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
        void show_result(){
            cout << total << endl;
        }
};

class Percentage

int main(){


    return 0;
}