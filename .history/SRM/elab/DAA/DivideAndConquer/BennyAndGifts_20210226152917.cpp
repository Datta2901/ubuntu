#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    pair<int,int>position(0,0),temp(0,0);
    list<pair<int,int>> curren
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'R'){
            temp = position;
            temp.second += 1;
            position = temp;
        }else if(str[i] == 'L'){
             temp = position;
            temp.second -= 1;
            position = temp;
        }else if(str[i] == 'U'){
             temp = position;
            temp.first -= 1;
            position = temp;
        }else if(str[i] == 'D'){
            temp = position;
            temp.first += 1;
            position = temp;
        }

    }
    return 0;
}