#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin >> number;
    stack<int>a;
    vector<int>i,j;
    for(int i = 0; i < 2 * number;i++){
        int b;
        cin >> b;
        a.push(b);
    }
    int count = 1;
    for(int i = 0; i < 2 * number; i++){
        cout << a.top();
        if(i % number == 1){
            cout << endl;
        }else{
            cout << " ";
        }
        a.pop();
    }
    return 0;
}