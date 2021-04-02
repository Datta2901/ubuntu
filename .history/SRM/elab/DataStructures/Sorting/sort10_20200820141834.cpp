#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int size,items;
        cin >> size >> items;
        int answer = 0;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            if(a < 0){
                answer += a;
            }
        }
        cout << abs(answer) << endl;
    }

    return 0;
}