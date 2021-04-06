#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    try{
        cin>>a>>b>>c;
        if(cin){
            float answer = a*pow((1 + 0.01*b),c);
            cout<<"Compound Interest is:"<< answer-a;
        }else{
            throw(false);
        }
    }catch(...){
        cout << "Invalid input. Try again";
    }
    return 0;
}