#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> a;
    for(int i = 0; i < 4; i++){
        int b;
        cin >> b;
        a.push(b);
    }
    cout << "Elements in the queue are";
    for(auto it = a.front(); it != a.back(); it++){
        cout << it << " ";
    }
    cout << "Deleted value "
    return 0;
}