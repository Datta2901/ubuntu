// #include <stdio.h>

// int main()
// {
//  int array123 [100];
//     long int N,i;
//     long long int prod;
//     scanf("%li",&N);
//     long int a[N];
//     long int big,bigger,biggest,temp;
//     for(i=0;i<N;i++)
//     {
//      scanf("%li",&a[i]);
//     }
//     printf("-1\n-1\n");
//     big=a[0];
//     bigger=a[1];
//     if(a[0]>bigger)
//     {
//      bigger=a[0];
//      big=a[1];
//     }
//     biggest=a[2];
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
//   if(a[i]>biggest)
//   {
//    big=bigger;
//    bigger=biggest;
//    biggest=a[i];   
//   }
//   else if(a[i]>bigger)
//   {
//    big=bigger;
//    bigger=a[i];   
//   }
//   else if(a[i]>big)
//   {
//    big=a[i];
//   }
//   prod=big*bigger*biggest;
//   printf("%lli\n",prod);
//     }
//     return 0;
// }

