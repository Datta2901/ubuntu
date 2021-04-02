#include<bits/stdc++.h>
using namespace std;


int main() {
    long int  size ,queries,max=0,answer=0;
    cin>> size >>queries;
    vector<int>numbers(size + 1);
    for(int i = 0;i < queries; i++){
        int a,b,sum;
        cin >> a >> b >> sum;
        numbers[a]+=sum;
        if((b + 1) <= size ){ 
            numbers[b + 1]-=sum;
        }
    }

    for(int i = 1; i <= size ;i++){
       answer=answer+numbers[i];
       if(max<answer){ 
           max=answer;
       }

    }

    cout <<max;
    return 0;
}