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
    int count = 0;
    while(!a.empty()){
        cout << a.top() << " ";
        if(count == number){
            cout << endl;
            c
        }
        count++;
    }
    return 0;
}