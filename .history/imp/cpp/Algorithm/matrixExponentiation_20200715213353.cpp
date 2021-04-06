#include<bits/stdc++.h>
using namespace std;
#define N  101
int arr[N][N],I[N][N];

void matrixMultiplication(int A[][N],int dim,int order){
    for(int i = 0; i < dim; i++){
        for
    }
}

void matrixExponentiation(int dim,int order){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            if(i == j){
                I[i][j] = 1;
            }else{
                I[i][j] = 0;
            }
        }
    }

    matrixMultiplication(I,dim,order);

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int dim ,order;
        cin >> dim >> order;
        for(int i = 0; i < dim; i++){
            for(int j = 0; j < dim; j++){
                cin >> arr[i][j];
            }
        }
        
        matrixExponentiation(dim,order);

    }

}