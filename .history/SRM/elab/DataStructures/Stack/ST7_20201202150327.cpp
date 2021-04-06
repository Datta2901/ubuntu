// // balance or not
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cin >> str;
//     stack<char>name;
//     for(int i = 0; i < str.size(); i++){
//         if(str[i] == '('){
//             name.push(str[i]);
//         }else{
//             if(str[i] == ')' && name.top() == '('){
//                 name.pop();
//             }
//         }
//     }
//     if(name.empty()){
//         cout << "String is balanced!\n";
//     }else{
//         cout << "String is unbalanced!\n";
//     }
//     return 0;
// }


// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     string str;
// //     cin >> str;
// //     cout << "Reversed string is ";
// //     for(int i = str.size() - 1; i >= 0; i--){
// //         cout << str[i];
// //     }
// //     cout << endl;
// // }