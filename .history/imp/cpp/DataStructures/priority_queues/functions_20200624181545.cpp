#include<bits/stdc++.h>
using namespace std;

void PrintQue(priority_queue<int> a){

    while(!a.empty()){
        cout << a.top() << " " ;
        a.pop();
    }

}

int main(){
    priority_queue<int> answer;
                        //h
    answer.push(1);
    answer.push(30);
    answer.push(100);
    answer.push(120);
    PrintQue(answer);
    return 0;
}