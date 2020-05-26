// its basically program is to find the number of substrings canbe formed with a given char
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int len;
  string s;
  char f;
  int l,r;
  int m;
  while(t--)
  {
    long long ans=0;
    cin >> len;
    cin >> s >> f;
    int st=0;
    int c =-1;
    long int count = 0;
    for(int i=0;i<len;i++){
    
        // if(s[i] == f){
		// 	ans = ans + (i-c)*(len-i); 
        //         //(starting from first upto given char what is the length) * (starting from char and ending what is the length)             	
		// 	c = i;
        // }

        //this is similar to 
         if(s[i] == f){
             ans = ans + (count + 1)*(len - i);
             count++;
         }else{
             count++;
         }
    }
    cout << ans << endl;
  }
}
