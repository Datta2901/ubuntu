#include<iostream>
using namespace std;
#define testcase() int t; cin >> t; while(t--)
int main(){
     testcase(){
        int size;
        cin >> size;
        vector<int> velocity,infected;
        velocity.push_back(0);
        for(int i = 1; i  <= size; i++){
            int a;
            cin >> a;
            velocity.push_back(a);
        }


    return 0;
}