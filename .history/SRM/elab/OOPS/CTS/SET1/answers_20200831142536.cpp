#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int size;
  	cin >> size;
  	vector<int>data;
  	for(int i = 0; i < size; i++){
      int a;
      cin >> a;
      data.push_back(a);
    }
  	int element;
  	cin >> element;
  	for(int i = 0; i < size; i++){
    	if(element == data[i]){
        	cout << element << " is present at index " << i + 1 << endl;
          	break;
        }
      	if(i == size - 1){
        	cout << " is not " << element << " is not present in the list" << endl;
        }
    }
	return 0;
}