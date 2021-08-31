#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[],int  sum = 0) {
    vis[node] = 1;
    int maximum = INT_MIN;  
    for(auto it: adj[node]) {
        if(!vis[it]) {
            int temp = checkForCycle(it, node, vis, adj,sum + node);
            if(temp != -1){ 
                if(maximum < sum){
                    maximum = sum;
                }
                return true; 
            }
        }
        else if(it !=parent){ 
            if(maximum < sum){
                maximum = sum;
            }
            return maximum; 
        }
    }
    return -1; 
}

bool isCycle(int V, vector<int>adj[]){
    vector<int> vis(V+1, 0); 
    for(int i = 0;i<V;i++) {
        if(!vis[i]){   
            int answer = checkForCycle(i, -1, vis, adj);
            if(answer != -1){
                 return answer; 
            }
        }
    }
    return -1; 
}

int solution(vector<int>arr){
    int answer = 0;
    vector<int>adj[arr.size()];
    for(int i = 0; i < arr.size(); i++){
        adj[i].push_back(arr[i]);
    }
    cout << isCycle(arr.size(),adj) << endl;
   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int> edges;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            edges.push_back(a);
        }

    }

    return 0;
}


static int solution(int[] array) {
    int n = array.length;
    int count[] = new int[n];
    Arrays.fill(count, 0);
    for(int i = 0; i < n; i++) {
        if(array[i] != -1)
            count[array[i]] += i;
    }
    int maxWeight = 0;
    int nodeNumber = 0;
    for(int i = 0; i < n; i++) {
        if(count[i] > maxWeight) {
            maxWeight = count[i];
            nodeNumber = i;
        }
    }
    return nodeNumber;
}

int solution(vector<int>arr){
    int n = arr.size();
    vector<int>answer(n,0);
    for(int i = 0; i < n; i++) {
        if(arr[i] != -1)
            answer[arr[i]] += i;
    }
    int max = 0,index = 0;
    for(int i = 0; i < n; i++) {
        if(answer[i] > max) {
            max = answer[i];
            index = i;
        }
    }
    return index;
}