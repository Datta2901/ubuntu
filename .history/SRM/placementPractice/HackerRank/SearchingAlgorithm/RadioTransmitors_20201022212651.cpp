#include<bits/stdc++.h>
#define max 100005
using namespace std;
int main(){
    int n,k,count=0,i,j; 
    cin >> n >> k;
    int *location =(int*)malloc(sizeof(int) * max);
    for(i=0;i<ma;i++){
        location[i]=0;
    }   
    for(i = 0; i < n; i++){
        int a;
        cin >> a;
        location[a]= 1;
    }
    for(i=0;i<10000ma;i++){
        if(location[i]==1){
            j=i+k;
            if(j >= 10000ma){
                j = 10000ma;
            }
            for(;j>=i;j--){
                if(location[j]==1){
                    count++;
                    i=j+k;
                    break;
                }
            }
        }
    }
    cout << count << endl;;
    return 0;
}