#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        if(N==1){
            ll M,P,collisions=0;
            cin>>M;
            ll countP=0,countN=0;
            for(int i=0;i<M;i++){
                cin>>P;
                if(P>0)
                countP++;
                else
                {
                    countN++;
                }
            }
            collisions = countN*countP;
            cout<<collisions<<"\n";

        }
        else{
            vector<vector<int>> lines(N);
            map<int, int> mp;
            int M=0;
            for(int i=0;i<N;i++){
                cin>>M;
              for(int j=0;j<M;j++){
                  int y=0;
                  cin>>y;
                  lines[i].push_back(y);
                     mp[abs(y)]++;
                 
              }

            }

            long long answer=0;
           for(auto ant :mp){
               if(ant.second>1){   // retriving the values from key value pair
                   answer++;
               }
           }

            vector<int> pos,neg;
           for(auto line:lines){
               for(auto ant:line){
                   if(ant>0){
                       pos.push_back(ant);
                   }else{
                       neg.push_back(ant);
                   }
               }
           
          reverse(pos.begin(),pos.end());
           int closests=0;
           while(true){
               if(pos.empty()&&neg.empty()){
                   break;
               }
               else{
                   if(pos.empty()){
                       closests = neg.back();
                   }else{
                       if(neg.empty()){
                           closests = pos.back();
                       }
                       else{
                            closests = pos.back()<abs(neg.back())?pos.back():neg.back();
                       }
                   }
               }

               if(closests<0){
                   if(mp[abs(closests)]>1){   // means colliding at origin
                   answer = answer+neg.size()-1;
                   }else{
                       answer = answer+pos.size();
                   }
               }else{
                  
                       if(mp[abs(closests)]>1){
                           answer+=pos.size()-1;
                       }else{
                           answer+=neg.size();
                       }
                   
               }

               if(closests<0){
                   neg.pop_back();
                   
               }else{
                   pos.pop_back();
               }
             }
           }

           cout<<answer<<"\n";

        }
    }
}