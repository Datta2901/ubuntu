#include<bits/stdc++.h>
using namespace std;

class Train{
    public:
        int coaches;
        string from,to;
        Train(string a,string b,coaches){
            from = a;
            to = b;
        }
        void operator = (Train & M){
            coaches = M.coaches;
            from = M.from;
            to = M.to;
        }
};

int main(){
    Train TamilNaduExpress()
    return 0;
}