#include <iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
int p,j,k;
cin >> p;
for(int i=0;i<p;i++){
int ans = 0;
int arr1[100] = {0},arr2[100] = {0};
char s[100000] = {'\0'};
char t[100000] = {'\0'};
int res[100];
cin >> s; 
cin >> t;
int p = 0;
for(j=0;j<strlen(s);j++){
if(arr1[s[j]-96] == 0){
res[p] = s[j]-96;
p++;
}
arr1[s[j]-96]++;
}
for(j=0;j<strlen(t);j++){
arr2[t[j]-96]++;
if(arr1[t[j]-96] == 0)
ans++;
}
for(k=0;k<p;k++){

if(arr1[res[k]] != arr2[res[k]])
ans = ans + abs(arr2[res[k]]-arr1[res[k]]);
}
cout << ans << "\n";
}
}