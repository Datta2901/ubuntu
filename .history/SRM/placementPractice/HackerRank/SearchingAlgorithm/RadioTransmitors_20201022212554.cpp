#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0,i,j; 
    cin >> n >> k;
    int *locat =(int*)malloc(sizeof(int) * 100005);
    for(i=0;i<100005;i++){
        locat[i]=0;
    }   
    for(i = 0; i < n; i++){
        int a;
        cin >> a;
        locat[a]= 1;
    }
    for(i=0;i<100005;i++){
        if(locat[i]==1){
            j=i+k;
            if(j >= 100005){
                j = 100004;
            }
            for(;j>=i;j--){
                if(locat[j]==1){
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