#include<bits/stdc++.h>

using namespace std;

int main(){ 
    int t;
    cin >> t;
    while(t--){
        int size,cost;
        cin >> size >> cost;
        int guests[size+1];
        vectorInput(guests,size + 1);
        map<int ,int>frequency;
        for(int i=0;i<size;i++){
            cin>>guests[i];
        }
        int arrangement[size+1][size+1]={0};
        for(int i = 0;i < size; i++){
            for(int j = 0; j < size; j++){
                arrangement[i][j]=0;
            }
        }
        for(int i = 0;i < size; i++){
            frequency.clear();
            for(int j = i; j < size; j++){
                if(j == 0){
                    arrangement[i][j] = 0;
                }else{
                    arrangement[i][j] = arrangement[i][j-1];
                }
                if(frequency.count(guests[j])){
                    if(frequency[guests[j]] == 1)
                    {
                        arrangement[i][j]++;
                    }
                    arrangement[i][j]++;
                }
                frequency[guests[j]]++;
            }
        }
 
    int inefficiency =INT_MAX;
    int arguments[101][1001];
    for(int i=0;i<=100;i++){
        for(int  j=0;j<=100;j++){
            arguments[i][j]=0;
        }
    }
    for(int i=0;i<size+1;i++)
        arguments[1][i]=arrangement[0][i-1];
    for(int i=2;i<=100;i++){
        arguments[i][1]=0;
    }
    for(int i=2;i<=100;i++){
        for(int j=2;j<=size;j++){
            int minimum = INT_MAX;
            for(int p=1;p<j;p++){
                minimum = min(minimum ,arguments[i-1][p]+arrangement[p][j-1]);
            }
            arguments[i][j]= minimum ;
        }
    }

    for(int i = 1; i <= 100; i++){
        inefficiency =min(i * cost + arguments[i][size],inefficiency);
    }
    cout << inefficiency << endl;
 
    }
 
}