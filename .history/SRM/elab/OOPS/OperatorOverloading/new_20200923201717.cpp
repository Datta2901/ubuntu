#include<bits/stdc++.h>
using namespace std;

class Train{
    public:
        int coaches;
        string from,to;
        Train(){
            coaches = 0;
        }
        Train(string a,string b,int c){
            from = a;
            to = b;
            coaches = c;
        }
        void operator = (Train & M){
            coaches = M.coaches;
            from = M.from;
            to = M.to;
        }
        void Display(){
            cout << "No of coaches available are " << coaches
        }
};

int main(){
    Train Express("Chennai","Delhi",26),superfast();
    
    return 0;
}