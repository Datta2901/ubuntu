#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size,target;
        cin >> size >> target;
        int sum = 0;
        vector<int>h;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            h.push_back(a);
        }
        sort(h.begin(),h.end());
        set<int>h1;
        h1.insert(h[size - 1]);
        sum = h[size - 1];
        int z = -1;
        for(int i = size - 2; i >= 0; i--){
            set<int>h2;
            sum += h[i];
            set<int>::iterator i1 = h1.begin(0)
            while()
        }

    }
    return 0;
}