// #include <stdio.h>

// int main()
// {
//  int array123 [100];
//     long int N,i;
//     long long int prod;
//     scanf("%li",&N);
//     long int big,bigger,biggest,temp;
//     for(i=0;i<N;i++)
//     {
//      scanf("%li",&array123[i]);
//     }
//     printf("-1\n-1\n");
//     big=array123[0];
//     bigger=array123[1];
//     if(array123[0]>bigger)
//     {
//      bigger=array123[0];
//      big=array123[1];
//     }
//     biggest=array123[2];
//     if(biggest<bigger && biggest>=big)
//     {
//      temp=bigger;
//      bigger=biggest;
//      biggest=temp;
//     }
//     if(biggest<big)
//     {
//      temp=big;
//      big=biggest;
//      biggest=bigger;
//      bigger=temp;
//     }
//     prod=big*bigger*biggest;
//     printf("%lli\n",prod);
//     for(i=3;i<N;i++)
//     {
//   if(array123[i]>biggest)
//   {
//    big=bigger;
//    bigger=biggest;
//    biggest=array123[i];   
//   }
//   else if(array123[i]>bigger)
//   {
//    big=bigger;
//    bigger=array123[i];   
//   }
//   else if(array123[i]>big)
//   {
//    big=array123[i];
//   }
//   prod=big*bigger*biggest;
//   printf("%lli\n",prod);
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void getproduct(priority_queue<int> product){
    int p = 1;
    for(int i = 0; i < 3; ++)
}

int main(){
    int size;
    cin >> size;
    priority_queue<int>product;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        product.push(a);
        if(i < 2){
            cout << -1 << endl;
        }else{
            getproduct(product);
        }

    }

    return 0;
}