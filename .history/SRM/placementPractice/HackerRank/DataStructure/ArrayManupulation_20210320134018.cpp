#include<bits/stdc++.h>
using namespace std;


int main() {
    long int  size ,queries,max=0,answer=0;
    cin>> size >>queries;
    vector<int>numbers(size + 1);
    for(int i=0;i <queries;i++){
        int ,b,sum;
        cin >>  >> b >> sum;
        []+=sum;
        if((b + 1) <= size ){ 
            [b + 1]-=sum;
        }
    }

    for(i=1;i<= size ;i++)
    {
       answer=answer+[i];
       if(max<answer) max=answer;

    }

    cout<<max;
    return 0;
}