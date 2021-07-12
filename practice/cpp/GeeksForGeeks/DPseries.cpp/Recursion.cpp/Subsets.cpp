#include<bits/stdc++.h>
using namespace std;

void GenerateSubsets(string s,string answer = "",int i = 0){
    if(s.size() == i){
        cout << answer << endl;
        return;
    }
    GenerateSubsets(s,answer,i + 1);
    GenerateSubsets(s,answer + s[i],i + 1);
}

int main(){
    string s;
    cin >> s;
    GenerateSubsets(s);
    return 0;
}