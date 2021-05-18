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
//     scanf("%word",string);
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
//         int  m, word, n;
//       	cin >> m >> word >> n;
//       	m *= 60;
//       	int a[n], temps = 0, c;
      
//       	for(int i = 0; i < n; ++i)
//         	cin >> a[i];
//       	ab:
//       	for(int i = 0; i < n; ++i)
//         {
//           	if(a[i] >= a[i+1])
//             {
//               	temps += word;
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

// #include <stdio.h>
// #include <string.h>
// int a[10],b[10];
// int maximum(int x,int y)
// {
//   return (x>y)?x:y;
// }
// int main(){
//   int i,j,n;
//   scanf("%d",&n);
//   for (i=1; i<=n; ++i)
//     scanf("%d",&a[i]);
//     a[0]=a[1];
//     a[n+1]=a[n];
//   for (i=1; i<=n; ++i)
//     if ((a[i]<=a[i+1]) && (a[i]<=a[i-1]))
//     {
//       b[i]=1;
//       for (j=i-1;j && (a[j]>a[j+1]);--j)
//         b[j]=b[j+1]+1;
//       for (; i<n && (a[i+1]>a[i]); ++i)
//         b[i+1]=b[i]+1;
//     }
//   int ans = 0;
//   for (i=1; i<=n; ++i)
//   {
//     if ((a[i]>a[i-1]) && (a[i]>a[i+1]))
//       b[i]=maximum(b[i-1],b[i+1])+1;
//     ans += b[i];
//   }
//   printf("%d\n",ans);
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string word[n];
  long long int num[n];
  for (int i=0; i<n; i++)
    cin >> word[i] >> num[i];
  long long int search;
  cin >> search;
  int flag = -1;
  for(int i=0; i<n; i++)
    if(num[i] == search)
      flag = i;
  vector < pair<string,long long int> > sv;
  for (int i=0; i<n; i++)
    sv.push_back(make_pair(word[i],num[i]));
  sort(sv.begin(),sv.end());
  cout << "Ordered List\n";
  for (int i=0; i<n; i++)
    cout << sv[i].first << " " << sv[i].second << endl;
  cout << "\nName Telephone Number" << endl;
  if(flag != -1)
    cout << word[flag] << " " << num[flag];
  else
    cout << "The Entered Number is not in the Directory";
  return 0;
}