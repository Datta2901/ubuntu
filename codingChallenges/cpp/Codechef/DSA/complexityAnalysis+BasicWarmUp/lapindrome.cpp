#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int lapindrome(char *str) {
    int flag = 1;
    int length = strlen(str);
    int* arr = (int *)malloc(sizeof(int) * 26);
    for(int i = 0; i < 26; i++) {
        arr[i] = 0;
    }
    int j = length - 1;
    for(int i = 0; i < length/ 2; i++, j--) {
        arr[str[i] - 'a'] += 1;
        arr[str[j] - 'a'] -= 1;
    }
    for(int i = 0; i < 26; i++) {
        if(arr[i] != 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(void) {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        char* str = (char *)malloc(sizeof(char) * 1000);
        scanf("%s", str);
        int flag = lapindrome(str);
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}

