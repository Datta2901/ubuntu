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


// #include <stdio.h>
// #include <string.h>
// int main(){
//   int t;
//   scanf("%d",&t);
//   while(t--){
//     char string[100];
//     scanf("%s",string);
//     int i = 0, count1 = 0 , count2 = 0;
//     for(i=0; i<strlen(string); i++){
//       if(string[i]=='S' && string[i+1]=='U' && string[i+2]=='V' && string[i+3]=='O'){
//         if(string[i+4]=='J' && string[i+5]=='I' && string[i+6]=='T'){
//           count2++;
//         }else{
//           count1++;
//         }
//       }
//     }
//     printf("SUVO = %d, SUVOJIT = %d\n",count1,count2);
//   }
//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int size;
//         cin >> size;
//         vector<int> numbers;
//         int a;
//         for(int i = 0; i < size; i++){
//             cin >> a;
//             numbers.push_back(a);
//         }
//         sort(numbers.begin(),numbers.end(),greater<int>());
//         for(int i = 0; i < size; i++){
//             if(i != size - 1){
//                 cout << numbers[i] << " ";
//             }else{
//                 cout << numbers[i];
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <string.h>
// using namespace std;

// int main(){
//   	int t;
//   	cin >> t;
//   	while(t){
//         int  m, s, n;
//       	cin >> m >> s >> n;
//       	m *= 60;
//       	int a[n], temps = 0, c;
      
//       	for(int i = 0; i < n; ++i)
//         	cin >> a[i];
//       	ab:
//       	for(int i = 0; i < n; ++i)
//         {
//           	if(a[i] >= a[i+1])
//             {
//               	temps += s;
//           		c = a[i];
//               	a[i] = a[i+1];
//               	a[i+1] = c;
//             }
//         }
    		
//       	if(is_sorted(a,a+n) == true)
//         {
//           	if(m >= temps)
//               	cout << "1" << endl;
      
//       		else
//               	cout << "0" << endl;
// 		}
              
//       	else 
//           	goto ab;
      
//       	--t;
//     }
  
//  	return 0; 
// }