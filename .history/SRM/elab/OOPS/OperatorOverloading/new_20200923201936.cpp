#include<bits/stdc++.h>
using namespace std;

class Train{
    public:
        int coaches;
        string from,to;
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
            cout << "No of coaches available are " << coaches << endl;
            cout << "Train Starts from " << from << endl;
            cout << "Ends at " << to << endl;
        }
};

int main(){
    Train Express("Chennai","Delhi",26),superfast("Delhi","Vijayawada",30);
    cout << "Details of Express " << endl;
    Express.Display();
    
    
    return 0;
}