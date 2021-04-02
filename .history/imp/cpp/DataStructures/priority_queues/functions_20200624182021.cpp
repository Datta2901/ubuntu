#include<bits/stdc++.h>
using namespace std;

void PrintQue(priority_queue<int> a){

    while(!a.empty()){
        cout << a.top() << " " ; // top function used to get the top element or the largest element upto know
        a.pop();                // removes the first element of the list
    }
    cout << endl;
}

int main(){
    priority_queue<int> answer;
                        //here push function is used to add the element in a prio_que
    answer.push(1);
    answer.push(30);
    answer.push(100);
    answer.push(120);
    cout << "The size of the priority queue is : " << 
    cout << "The elements in the priority queue are  ";
    PrintQue(answer);

    return 0;
}