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
    int arrival[n], burst[n], wait[n], turn[n], queue[n], temp_burst[n];
    bool complete[n];
    time_t start;
    time(&start);
    while(procount < 5)
    {
        time_t end;
    int r = (rand() % 100);
    if(r<60)
    {
    time(&end);
    int arr = int(end) - int(start);
    arrival[procount] = arr;
    procount++;
    }
    sleep(1);
    }
    cout << "\nThe arrival time of the processess : ";
    for(int i = 0; i < n; i++)
    cout<<arrival[i]<<" ";
    cout << "\nEnter the burst time of the processess : ";
    for(int i = 0; i < n; i++){
    cin>>burst[i];
    temp_burst[i] = burst[i];
    }
    for(int i = 0; i < n; i++){
    complete[i] = false;
    queue[i] = 0;
    }
    while(timer < arrival[0]) //Incrementing Timer until the first process arrives
    timer++;
    queue[0] = 1;
    while(true){
        bool flag = true;
        for(int i = 0; i < n; i++){

            if(temp_burst[i] != 0){
             flag = false;
            break;
        }
        }
        if(flag)
        break;
        for(int i = 0; (i < n) && (queue[i] != 0); i++){
        int ctr = 0;
        while((ctr < tq) && (temp_burst[queue[0]-1] > 0)){
            temp_burst[queue[0]-1] -= 1;
            timer += 1;
            ctr++;
            //Checking and Updating the ready queue untill all the processes arrive
            checkNewArrival(timer, arrival, n, maxProccessIndex, queue);
        }
        //If a process is completed then store its exit time
        //and mark it as completed
        if((temp_burst[queue[0]-1] == 0) && (complete[queue[0]-1] == false)){
        //turn array currently stores the completion time
            turn[queue[0]-1] = timer;
            complete[queue[0]-1] = true;
        }
        //checks whether or not CPU is idle
        bool idle = true;
        if(queue[n-1] == 0){
            for(int i = 0; i < n && queue[i] != 0; i++){
                if(complete[queue[i]-1] == false){
                idle = false;
                }
            }
        }
        else
            idle = false;
        if(idle){
            timer++;
            checkNewArrival(timer, arrival, n, maxProccessIndex, queue);
        }
        queueMaintainence(queue,n);
        }
    }
    for(int i = 0; i < n; i++){
        turn[i] = turn[i] - arrival[i];
        wait[i] = turn[i] - burst[i];
    }
    cout << "\nProgram No.\tArrival Time\tBurst Time\tWait Time\tTurnAround Time" << endl;
    for(int i = 0; i < n; i++){
        cout<<i+1<<"\t\t"<<arrival[i]<<"\t\t" <<burst[i]<<"\t\t"<<wait[i]<<"\t\t"<<turn[i]<<endl;
    }
    for(int i =0; i< n; i++){
        avgWait += wait[i];
        avgTT += turn[i];
    }
    cout<<"\nAverage wait time : "<<(avgWait/n) << "\nAverage Turn Around Time : "<< (avgTT/n) << endl;
return 0;
}