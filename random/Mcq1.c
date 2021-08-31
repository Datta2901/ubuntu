#include<stdio.h>
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int i,j,k;
    i = ++a[0];
    j = a[0]++;
    k = a[++i];
    printf("%d %d %d", i, j, k);
    return 0;
}

