// // #include<iostream>
// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int a,b;
// //     cin >> a >> b;
// //     string arr[10]  = {"0","one","two","three","four","five","six","seven","eight","nine"};
// //     for(int i = a; i <= b; i++){
// //         if(i < 10){
// //             cout << arr[i] << endl;
// //         }else if(i % 2 == 0){
// //             cout << "even" << endl;
// //         }else{
// //             cout << "odd" << endl;
// //         }
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
  
// int squareSum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//         sum += (2 * i) * (2 * i);
//     return sum;
// }
  
// // Driver Code
// int main()
// {
//     long long int a= (pow(3,250));
//     cout <<  a % 7;
//     return 0;
// }
#include <iostream>
using namespace std;
 
/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
// Driver code
int main()
{
    int x = ;
    int y = 250;
    int p = 7;
    cout << "Power is " << power(x, y, p);
    // cout << 832146375 % 9;
    return 0;
}