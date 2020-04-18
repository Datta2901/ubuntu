// #include<iostream>
// #include<cmath>
// using namespace std ;
// int main()
// {
//         int num ;
//         cin >> num;
//         int n,a,b,c=0,count =0 ;
//         cin >> n ;
//         for(int i = 0;n > 0; i++,n=n/10)
//         {
//             a =n%10 ;
//             c =(pow(2,i))*a+c ;
//         }

//         for(n = c ; n > 0; n = n/2 ){
//             if(n % 2 == 0){
//                 count++;
//             }
//             else{
//                 break ;
//             }
//         }
//     cout << count << endl;
//     return 0 ;
// } 
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, cnt = 0, flag = 0;
    cin >> n;
    string str;
    cin >> str;
    for(int i = n - 1; i >= 0; i--) {
        if(str[i] != '1')
            cnt++;
        else {
            cout << cnt;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << "0";
    return 0;
}