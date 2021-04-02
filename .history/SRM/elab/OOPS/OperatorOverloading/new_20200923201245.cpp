#include<bits/stdc++.h>
using namespace std;

class Train{
    public:
        int coaches;
        string from,to;
        Train(string a,string b){
            from = a;
            to = b;
        }

        void operator = (Train & M){
            coaches = M.coaches;
            
        }
};

int main(){
    return 0;
}