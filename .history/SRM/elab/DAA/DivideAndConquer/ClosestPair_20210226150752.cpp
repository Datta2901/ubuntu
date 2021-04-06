#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float GetDist(pair<int,int>p,pair<int,int>q){
    float answer = sqrt((pow((p.first - q.first),2) + pow((p.second - q.second),2)));
    return answer;
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
            float answer = GetDist(points[i],points[j]);
            if(mini > answer){
                mini = answer;
            }
        }
    }
    cout << set.precision(0mini << endl;

    return 0;
}