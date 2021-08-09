#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getCount(string a){
    int answer = 0;
    set<int>b;
    for(auto i : a){
        b.insert(i);
    }

    for(auto i : b){
        answer += abs(('a' - i)) + 1;
    }
    return answer;
}

int main(){
    string s;
    cin >> s;
    map<char,int> fre;
    for(auto i : s){
        fre[i]++;
    }
    string a = "";
    long long int answer = 0;
    for(int i = 0; i < s.size(); i++){
        if(fre[s[i]] > 1){
            fre[s[i]]--;
            a += s[i];
        }else{
            a += s[i];
            fre[s[i]]--;
            long long int count = 0;
            for(auto i : a){
                if(fre[i] == 0){
                    count++;
                }
            }
            if(count == a.size()){
                answer += (a.size() * getCount(a));
                a = "";
            } 
        } 
    }
    cout << (answer % long(1e9 + 7)) << endl;
    return 0;
}