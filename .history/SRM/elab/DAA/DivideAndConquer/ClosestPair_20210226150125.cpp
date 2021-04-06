#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float GetDist(pair<int,int>p,pair<int,int>q){
    return 
}

int main(){
    int size;
    cin >> size;
    vector<pair<int,int>> points;
    for(int i = 0; i < size; i++){
        int x,y;
        cin >> x >> y;
        points.push_back(make_pair(x,y));
    }
    float mini =1e3;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            float answer = Ge
            if(mini > answer){
                mini = answer;
            }
        }
    }

    return 0;
}