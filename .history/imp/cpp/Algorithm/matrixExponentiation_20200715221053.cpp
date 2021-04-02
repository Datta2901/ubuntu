#include<bits/stdc++.h>
using namespace std;
#define N  101
int arr[N][N],I[N][N];

//Normal approach

void matrixMultiplication(int A[][N],int dim,int order){

    int result[dim + 1][dim + 1];

    // calcualting the power 
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            result[i][j] = 0;
            for(int k = 0; k < dim; k++){
                result[i][j] += arr[i][k] * A[k][j] ;
            }
        }
    }

    // now changing 
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            A[i][j] = result[i][j];
        }
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
    for(int h = 0; h < order; h++){
        matrixMultiplication(I,dim,order);
    }
    
}

void printMatrix(int dim){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            cout << I[i][j] << " ";
        }
        cout << endl;
    }
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
        printMatrix(dim);
    }
}