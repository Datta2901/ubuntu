#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,money;
    cin >> size >> money;
    vector<int> cost;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        cost.push_back(a);
    }
    sort(cost.begin(),cost.end());
    int sum = 0,count = 0;
    for(int i = 0; i < size; i++){
        if(sum + cost[i] <= money){
            count++;
            sum += cost[i];
        }
    }
    cout << count << endl;
    return 0;
}