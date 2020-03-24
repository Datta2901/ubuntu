#include<stdio.h>
#include<stdlib.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n,m;
        scanf("%d",&n);
       scanf("%d",&m);

       int type[n],*total,*exist,price_basket;
       total = (int*)malloc(m*sizeof(int));
       exist = (int*)malloc(m*sizeof(int));
        for (int i=0; i<n; i++){
            scanf("%d",&type[i]);
            exist[type[i]-1] = 1;
        }

        for (int i=0; i<n; i++){
            scanf("%d",&price_basket);
            total[type[i]-1]+=price_basket;
        }

        int min=2600;
        for (int i=0; i<m;i++){
            if(total[i] < min && exist[i] == 1) {
                min = total[i];

            }
        }
        printf("%d\n",min);
    }
}