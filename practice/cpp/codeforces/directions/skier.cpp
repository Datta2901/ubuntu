#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define testcase() int t; cin >> t; while(t--)
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
int main()
 {
     int answer = 0;
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","a",stdout);
    testcase(){
        string a;
        cin >> a;
        vector<int> count;
        int x = 0,y =0;
        loop(a.size()){
            if(a[i] == 'N'){
                if(y + 1 ==0){
                   count.push_back((y < 0) ? -1 * y : y);
                   y = 0;
                   continue;  
                } 
            y++; 
            }else if(a[i] == 'S'){
                if(y - 1 == 0){
                   count.push_back((y < 0) ? -1 * y : y);
                   y = 0;
                   continue;  
                }
                y--;
            }else if(a[i] == 'E'){
                if(x + 1 == 0){
                   count.push_back((x < 0) ? -1 * x : x);
                   x = 0;
                   continue;  
                } 
                x++;
                answer += 5;
            }else if(a[i] == 'W'){
                if(x - 1 ==0){
                   count.push_back((x < 0) ? -1 * x : x);
                   x = 0;
                   continue;  
                } 
                x--;
                answer += 5;
            }
           
        }
        if(x != 0){
            count.push_back((x < 0) ? -1 * x : x);
        }if(y != 0){
            count.push_back((y < 0) ? -1 * y : y);
        }
        printVect(count,int);
        cout << endl;
    long long int answer = 0,toadd=0,required;
    loop(count.size()){
        answer += count[i];
    }
        if(answer < a.size()){
             toadd = a.size() - count.size() ;
        }
        required = answer * 5 + toadd;
        cout << required << endl;
    }
    return 0;
 }