#include<iostream>
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t, n, a[100000];

    scanf("%d",&t) ;
    while (t--)
    {

        int c = 0, d = 0;

        long long int b,product = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
         {   scanf("%lld",&b);
            if(b<0){
                b=-1*b ;
            }

             b=b%100 ;
            a[i]=b ;
         }        
        for (int i = 0; i < n; i++)
        {

            if (a[i] % 2 != 0 || a[i] % 4 == 0)

                d++;

            for (int j = i + 1; j < n; j++)
            {
                product = product* a[i]* a[j];
                
                if (product % 2 != 0 || product % 4 == 0)
                c++;
            }

            product = 1;
        }

        cout << c + d << endl;
    }

    return 0;
}