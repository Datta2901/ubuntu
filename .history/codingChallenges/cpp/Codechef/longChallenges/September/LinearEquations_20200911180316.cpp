#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> velocity,infected;
    for(int i = 0; i  < size; i++){
        int a;
        velocity.push_back(a);
    }
     
    int count;
        for(int j = 1; j < size; j++){
            count = 0; 
            for(int k = 1; k < size; k++){
                if(k == j){
                    count++;
                }else{
                    if(velocity[k] - velocity[j] != 0){
                        float answer = (j - k) / (velocity[k] - velocity[j]);
                        if(answer >= 0){
                            count++;
                        }
                    }
                }
            }
            infected.push_back(count)
        }
      

    return 0;
}