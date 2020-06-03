#include<iostream>
#include<vector>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
using namespace std;
vector<int> list(vector<int> A,vector<int> B){
    vector<int> T,prev;
    for(int i = 0; i < A.size(); i++){
            T.push_back(1) ;
            prev.push_back(-1) ;
        for(int j = 0; j < i; j++){
            if(A[j] < A[i] && T[i] < T[j] + 1){
                T[i] = T[j] + 1;
                prev[i] = j;
            }
        }
    }

    int last = 0;
    for(int i = 0; i < A.size(); i++){
        if(T[i] > T[last]){
            last = i;
        }
    }
    int current  = last;
    while(current >= 0){
        B.insert(B.begin(),current);
        current = prev[current];
    }
    return B;
}

int main(){
    vector<int> A,B;
    A = {7, 2, 1, 3, 8, 4, 9, 1, 2, 6, 5, 9, 3, 8, 1};
    B = list(A,B);
    // printVect(B,int);
    cout << "{" ;
    for(int i = 0; i < B.size(); i++){
        if(i != B.size()-1){
             cout << A[B[i]] << "," ;
        }else{
            cout << A[B[i]];
        }
       
    }
    cout << "}" << endl;
    return 0;
}