// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int size;
//         cin >> size;
//         set<int> numbers;
//         int count = 0,ans1,ans2;
//         bool flag = false;
//         for(int i = 0 ; i < size; i++){
//             int a;
//             cin >> a;
//             numbers.insert(a);
//             count++;
//             if(count == numbers.size()){
//                 count -= 1;
//                 if(!flag){
//                     ans1 = a;
//                     flag = true;
//                 }else{
//                     ans2 = a;
//                 }
//             }
//         }

//         if(ans1 > ans2){
//             cout << ans2 << " 1 " << endl << ans1 << " 1 " << endl;
//         }else{
//              cout << ans1 << " 1 " << endl << ans2 << " 1 " << endl;
//         }
//     }
//     return 0;
// }

#