// calculate occurences of a given char or number
#include<stdio.h>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> order;
    
    for(int i = 0; i < n; i++){
        int a;cin >> a;
        order.push_back(a);
    }

    //  (1) st method
    unordered_map<int,int> occurences;

    for(int i = 0; i < n; i++){
        occurences[order[i]]++;
    }

    for(auto m : occurences){
        cout << m.first << " " << m.second << endl;
    }

    //  or  normal method
    vector<int> freq(n);
    int count; 
    for(int i = 0; i < n; i++){
        count = 1;
        for(int j = i + 1; j < n; j++){
            if(order[i] = order[j]){
                count++;
                freq[j] = -1;
            }
        }
        if(freq[i] != -1){
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for(int i = 0; i < n; i++)
    {
        if(freq[i] != -1)
        {
            printf("%d occurs %d times\n", order[i], freq[i]);
        }
    }

    //(3) count inbuilt function  in stl library for set, vector,string
  

    
    return 0;
}

