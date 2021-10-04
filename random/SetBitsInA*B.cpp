#include<bits/stdc++.h>
using namespace std;

int solution(int A,int B){
    int n = A * B;
    int count = 0;
    while(n){
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << solution(a ,b) << endl;
}