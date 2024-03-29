#include<stdio.h>
#include<string.h>
#define MAX_LEN 1002
 
int partition(char string[], int low, int high) {
char pivot = string[high];
int i = low - 1;
int j;
for (j = low; j <= high - 1; j++) {
if (string[j] >= pivot) {
i++;
char temp = string[j];
string[j] = string[i];
string[i] = temp;
}
}
char temp = string[i + 1];
string[i + 1] = string[high];
string[high] = temp;
return (i + 1);
}
void quickSort(char string[], int low, int high) {
if (low < high) {
int point = partition(string, low, high);
quickSort(string, low, point - 1);
quickSort(string, point + 1, high);
}
}
int main() {
int testCase;
scanf("%d", &testCase);
int t;
for (t = 0; t < testCase; t++) {
char string[MAX_LEN];
scanf("%s", string);
quickSort(string, 0, strlen(string) - 1);

char result[strlen(string)];
int mid = strlen(string) / 2;
int low = mid - 1;
int high = mid + 1;
int pointer = 0;
result[mid] = string[pointer++];
while (high < strlen(string) && low >= 0) {
result[high++] = string[pointer++];
result[low--] = string[pointer++];
}
int i;
for (i = 0; i < strlen(string); i++) {
printf("%c", result[i]);
}
printf("\n");
}
return 0;
}