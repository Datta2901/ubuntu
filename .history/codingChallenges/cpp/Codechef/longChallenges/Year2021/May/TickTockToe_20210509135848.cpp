#include<bits/stdc++.h>
using namespace std;

bool isCon1(vector<vector<char> > mat,char a){ 
    // first row
    if(mat[0][0] == mat[0][1] == mat[0][2] == a){
        return true;
    }
    // second row
    if(mat[1][0] == mat[1][1] == mat[1][2] == a){
        return true;
    }
    // Third row
    if(mat[2][0] == mat[2][1] == mat[2][2] == a){
        return true;
    }
    //first column
    if(mat[0][0] == mat[1][0] == mat[2][0] == a){
        return true;
    }
    // second column
    if(mat[0][1] == mat[1][1] == mat[2][1] == a){
        return true;
    }
    // Third column
    if(mat[0][2] == mat[1][2] == mat[2][2] == a){
        return true;
    }

    // one diagonal
    if(mat[0][0] == mat[1][1] == mat[2][2] == a){
        return true;
    }

    // 2nd diagonal
    if(mat[0][2] == mat[1][1] == mat[2][0] == a){
        return true;
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