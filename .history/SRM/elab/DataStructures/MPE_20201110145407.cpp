#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> data;
    for(int  i = 0; i < 3; i++){
        int a;
        cin >> a;
        cout << a << " pushed to stack" << endl;
    }
    cout << data.top() << " popped from stack" << endl;
    data.pop();
    cout <<  << data.top() << 
    return 0;
}