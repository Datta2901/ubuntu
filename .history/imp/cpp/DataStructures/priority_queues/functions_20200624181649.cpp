#include<bits/stdc++.h>
using namespace std;

void PrintQue(priority_queue<int> a){

    while(!a.empty()){
        cout << a.top() << " " ; // top function used to get the 
        a.pop();
    }

}

int main(){
    priority_queue<int> answer;
                        //here push function is used to add the element in a prio_que
    answer.push(1);
    answer.push(30);
    answer.push(100);
    answer.push(120);
    PrintQue(answer);
    return 0;
}