#include<bits/stdc++.h>
#define max 100005
using namespace std;
int main(){
    int size,k,answer=0; 
    cin >> size >> k;
    int *location = (int*)malloc(sizeof(int) * max);
    for(int i = 0;i < max - 1;i++){
        location[i] = 0;
    }   
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        location[a]= 1;
    }
    for(int i=0;i< max - 1;i++){
        if(location[i]==1){
            int j=i+k;
            if(j >= max){
                j = max - 1;
            }
            for(; j >= i; j--){
                if(location[j] == 1){
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