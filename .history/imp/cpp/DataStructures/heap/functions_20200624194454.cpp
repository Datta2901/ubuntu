#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> pattern = {30,50,25,100,10,2,5};
    make_heap(pattern.begin(),pattern.end());       // to convert into a heap
    cout << "The Elements of the Heap is : ";
    for(vector<int> :: iterator it = pattern.begin(); it != pattern.end(); it++){
        cout << *it << " " ;
    }
    cout << endl;
    cout << "Maximum element is " << pattern.front() << endl;

    pattern.pop()
    return 0;
}