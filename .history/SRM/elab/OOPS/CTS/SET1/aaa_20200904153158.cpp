// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int size;
//   cin >> size;
//   vector<int>data;
//   for(int i = 0; i < size; i++)
//   {
//     int a;
//    	cin >> a;
//     data.push_back(a);
//   }
//   int element;
//   cin >> element;
//   for(int i = 0; i < size; i++){
//     if(element == data[i] - 1 ||element ==data[i] + 1 ){
//       cout << i + 1 << endl;
//       break;
//     }
//     if(i == size - 1){
//       cout << -1 << endl;
//     }
//   }
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size],s[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        s[i] = arr[i];
    }
    sort(arr,arr + size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i] == s[j]){
                cout << j << " ";
                break;
            }
        }
    }
    cout << endl;
}

#include<bits/stdc++.h>
using namespace s
