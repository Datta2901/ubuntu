#include<bits/stdc++.h>
using namespace std;
void printHeap(vector<int> pattern){
    for(vector<int> :: iterator it = pattern.begin(); it != pattern.end(); it++){
        cout << *it << " " ;
    }
    cout << endl;

}
int main(){
    vector<int> pattern = {30,50,25,100,10,2,5};

    make_heap(pattern.begin(),pattern.end());       // to convert into a heap
    cout << "The Elements of the Heap is : ";
    printHeap(pattern);
    cout << "Maximum element is " << pattern.front() << endl;

    pop_heap(pattern.begin(),pattern.end());
    pattern.pop_back();
    cout << "After deleting the maximum element heap is ";
    printHeap(pattern);
    
    cout << "Maximum element is " << pattern.front() << endl;

    pattern.push_back(120);
    push_heap(pattern.begin(),pattern.end());

    cout << "After Adding the maximum element heap is ";
    printHeap(pattern);
    
    cout << "Maximum element is " << pattern.front() << endl;
    
    sort_heap(pattern.begin(),pattern.end());
    cout << "After sorting : ";
    printHeap(pattern);

    make_heap(pattern.begin(),pattern.end());       // to convert into a heap
    is_heap(pattern.begin(), pattern.end())? 
    cout << "The container is heap ": 
    cout << "The container is not heap"; 
    cout << endl; 
    auto it = is_heap_until(pattern.begin(), pattern.end()); 
    return 0;
}
