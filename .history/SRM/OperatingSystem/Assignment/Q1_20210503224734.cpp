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

}
void checkNewArrival(int timer, int arrival[], int n, int maxProccessIndex,int queue[]){
if(timer <= arrival[n-1]){
bool newArrival = false;
for(int j = (maxProccessIndex+1); j < n; j++){
if(arrival[j] <= timer){
if(maxProccessIndex < j){
maxProccessIndex = j;
newArrival = true;
}
}
}
if(newArrival)
queueUpdation(queue,timer,arrival,n, maxProccessIndex);
}
}
int main(){
int n=5,tq=2,procount =0, timer = 0, maxProccessIndex = 0;
float avgWait = 0, avgTT = 0;
/*cout << "\nEnter the time quanta : ";
cin>>tq;
cout << "\nEnter the number of processess : ";
cin>>n;*/
int arrival[n], burst[n], wait[n], turn[n], queue[n], temp_burst[n];
bool complete[n];
time_t start;
time(&start);
while(procount < 5)
