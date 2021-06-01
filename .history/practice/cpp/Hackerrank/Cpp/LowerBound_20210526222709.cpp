#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> number;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        number.push_back(a);
    }
    int queries;
    cin >> queries;
    while(queries--){
        int num;
        cin >> num;
        auto it = lower_bound(number.begin(),number.end(),num);
        if(it == number.end()){
            
        }
    }
    
    return 0;
}