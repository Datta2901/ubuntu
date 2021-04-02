#include<bits/stdc++.h>
using namespace std;
#define N  101
int arr[N][N],I[N][N];

void matrixMultiplication(int dim){

    int result[dim + 1][dim + 1];

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            result[i][j] = 0;
            for(int k = 0; k < dim; k++){
                result[i][j] += I[i][k] + arr[k][j] ;
            }
        }
    }

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            arr[i][j] = result[i][j];
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
        matrixMultiplication(dim);
    }
    
}

void printMatrix(int A[][N],int dim){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            cout << A[i][j] << " ";
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
        printMatrix(arr,dim);
    }
}