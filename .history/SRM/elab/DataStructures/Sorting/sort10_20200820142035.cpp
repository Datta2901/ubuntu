#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int size,items;
        cin >> size >> items;
        int answer = 0;
        vector<int>laptops;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            laptops.push_back(a);
        }
        sort(laptops.begin(),laptops.end());
        for(int i = 0; i < items; i++)
        cout << abs(answer) << endl;
    }

    return 0;
}