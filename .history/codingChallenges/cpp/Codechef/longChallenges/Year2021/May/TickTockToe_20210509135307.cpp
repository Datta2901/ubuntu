#include<bits/stdc++.h>
using namespace std;

bool isCon1(vector<vector<char> > mat,char a){ 
    if(mat[0][0] == mat[0][1] == mat[0][2]){
        
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<char> > mat(3,vector<char>(3,0));
        int count = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> mat[i][j];
                if(mat[i][j] == '_'){
                    count++;
                }
            }
        }
    

    }
    return 0;
}