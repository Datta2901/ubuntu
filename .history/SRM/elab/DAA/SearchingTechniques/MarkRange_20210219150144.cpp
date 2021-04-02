#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class details{
    public:
    string name;
    int marks;
};

int main(){
    int count = 0;
    for(int i = 0; i < 10; i++){
        details obj;
        cin >> obj.name >> obj.marks;
        if(80 <= obj.marks <= 100){
            count++;
        }
    }
    cout << "Number of the student got 80-100 marks " 

    return 0;
}