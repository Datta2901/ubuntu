#include<bits/stdc++.h>
using namespace std;

class Train{
    public:
        int coaches;
        string from,to;
        Train(){
            coaches = 0;
            from = "Chennai";
            to = "Chennai";
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
            cout << "No of coaches available are " << coaches << endl;
            cout << "Train Starts from " << from << endl;
            cout << "Ends at " << to << endl;
        }
};

int main(){
    Train Express("Chennai","Delhi",26),a();
    cout << "Details of Express " << endl;
    Express.Display();
    cout << "Details of Express1 " << endl;
   a.Display();
    Express = a;
    
    return 0;
}