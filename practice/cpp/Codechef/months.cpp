#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#define testcase() int t; cin >> t;while(t--) 
#define value(a,n) for(int i = a;i< n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    string arr[7] = {"mon","tues","wed","thurs","fri","sat","sun"};
    
    int a,pos;
    testcase(){
        int answer[7] = {4,4,4,4,4,4,4};
        cin >>  a;
        string str;
        cin >> str;
        int c = a % 7;
        for(int i = 0; i< 7; i++ ){
            if(str.compare(arr[i]) == 0){
                pos = i;
                break;
            }
        }

        for(int i = pos ; i < pos + c;i++){
            answer[i % 7] += 1;
        }

        for(int j = 0 ; j < 7 ;j++ ){
             cout << answer[j] << " ";
        }
        cout << endl;   
    }

  return 0;
    }

 