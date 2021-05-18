#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
void queueUpdation(int queue[],int timer,int arrival[],int n, int maxProccessIndex){
int zeroIndex;
for(int i = 0; i < n; i++){
if(queue[i] == 0){
zeroIndex = i;
break;
}
}
queue[zeroIndex] = maxProccessIndex + 1;
}
void queueMaintainence(int queue[], int n){
for(int i = 0; (i < n-1) && (queue[i+1] != 0) ; i++){
int temp = queue[i];
queue[i] = queue[i+1];
queue[i+1] = temp;
}
