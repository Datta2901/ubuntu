#include<bits/stdc++.h>
#define max 100005
using namespace std;
int main(){
    int n,k,count=0,i,j; 
    cin >> n >> k;
    int *location =(int*)malloc(sizeof(int) * max);
    for(i=0;i<max - 1;i++){
        location[i]=0;
    }   
    for(i = 0; i < n; i++){
        int a;
        cin >> a;
        location[a]= 1;
    }
    for(i=0;i< max - 1;i++){
        if(location[i]==1){
            j=i+k;
            if(j >= max - 1){
                j = max - 1;
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