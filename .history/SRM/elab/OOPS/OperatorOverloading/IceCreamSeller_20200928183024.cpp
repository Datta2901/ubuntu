// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// class matrix{
//     public:
//     int sa,sb,la,lb;
//     double sanswer = 0,Lanswer = 0;
//     void get(){
//         cin >> sa >> la >> sb  >> lb;
//     }

//     void operator *(){
//         sanswer += (0.75 * (sa + sb));
//         Lanswer += (1.25 *(la + lb));
//     }

//     void put(){
//         cout << sanswer << endl;
//         cout << Lanswer << endl;
//     }
// };

// int main(){
//     matrix obj;
//     obj.get();
//     obj.operator*();
//     obj.put();
//     return 0;
// }
#include <iostream>
using namespace std;
class matrix
{
   matrix operator * ()
    {
   
    }
   void get()
    {
    while (c1!=r2)
    {
        cin >> r1 >> c1;
        cin >> r2 >> c2;
    }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
    
   void put()
    {
    }
};
int main()
{
    double a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2; int i, j, k;
    r1 =2; c1=2;
    r2 =2; c2=1;
    
            cin >> a[i][j];
        }
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cin >> b[i][j];
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }
    return 0;
}