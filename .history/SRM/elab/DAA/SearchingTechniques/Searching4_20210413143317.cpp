// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int size;
//     cin >> size;
//     int m;
//     cin >> m;
//     int sum = 0;
//     vector<int> mm;
//     for(int i = 0; i < size; i++){
//         int a;
//         cin >> a;
//         mm.push_back(a);
//     }
//     int count = 0;
//     for(auto x : mm){
//         count++;
//         if(count < m){
//             sum += x;
//         }
//     }
//     cout << "Minimum number of pages = " << sum << endl;
//     return 0;
// }


#include <stdio.h>
#include <string.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    char s[100];
    scanf("%s",s);
    int i = 0, count1 = 0 , count2 = 0;
    for(i=0; i<strlen(s); i++){
      if(s[i]=='S' && s[i+1]=='U' && s[i+2]=='V' && s[i+3]=='O'){
        if(s[i+4]=='J' && s[i+5]=='I' && s[i+6]=='T'){
          count2++;
        }else{
          count1++;
        }
      }
    }
    printf("SUVO = %d, SUVOJIT = %d\n",count1,count2);
  }
  return 0;
}