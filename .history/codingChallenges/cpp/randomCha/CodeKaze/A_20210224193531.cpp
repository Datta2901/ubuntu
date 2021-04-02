#include <stdio.h>    
#include <stdlib.h>
int main () {
    char str[] = "314.14 29.53";
    char* ptr;
    double v1, v2;
    v1 = strtod(str, &ptr);
    v2 = strtod(ptr, NULL);
    printf("%.2f\n", v1/v2);
    return 0;
}
