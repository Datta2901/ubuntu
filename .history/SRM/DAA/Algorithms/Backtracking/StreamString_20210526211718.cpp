#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){
    string a ;
    cin >> a;
    vector<int>answer;
    stringstream ss(a);
    char ch = ',';
    int num1;
    while(ss >> num1 >> ch){
        answer.push_back(num1);
    }

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " "
    }

    return 0;
}