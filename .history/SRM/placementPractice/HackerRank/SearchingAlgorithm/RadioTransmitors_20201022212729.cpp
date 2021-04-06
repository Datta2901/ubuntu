#include<bits/stdc++.h>
#define max 100005
using namespace std;
int main(){
    int n,k,answer=0; 
    cin >> n >> k;
    int *location =(int*)malloc(sizeof(int) * max);
    for(int i=0;i<max - 1;i++){
        location[i]=0;
    }   
    for(i = 0; i < n; i++){
        int a;
        cin >> a;
        location[a]= 1;
    }
    for(i=0;i< max - 1;i++){
        if(location[i]==1){
            int j=i+k;
            if(j >= max - 1){
                j = max - 1;
            }
            for(;j>=i;j--){
                if(location[j]==1){
                    answer++;
                    i=j+k;
                    break;
                }
            }
        }
    }
    cout << answer << endl;;
    return 0;
}