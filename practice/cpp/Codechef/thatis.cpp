#include<iostream>
using namespace std ;
int main(){
    int t ;
    cin >> t ;
    int n,*marks,k,a;
    while(t--){
        cin >> n ;
        marks = (int*)malloc(11*sizeof(int));
        for(int i =0 ; i < n; i++){
             cin >> k;
             cin >> a;
             if(marks[k-1] < a && k < 9 ){
                 marks[k] = a;
             }
        }

        a = 0;
        for(int i = 0; i <= 11; i++){
            a += marks[i];
        }

        cout << a << endl ;
    }





    return 0 ;
}
