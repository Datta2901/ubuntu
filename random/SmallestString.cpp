#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char>answer;
    for(auto i : s){
        answer.insert(i);
    }
    for(auto i : answer){
        cout << i;
    }
    return 0;
}

void findCommon(int a1[], int a2[], int a3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    int n1 = a1.size(),n2 = a2.size(),n3 = a3.size();
    while (i < n1 && j < n2 && k < n3)
    {
         if (a1[i] == a2[j] && a2[j] == a3[k])
         {  
             cout << a1[i] << " ";  
            i++; j++; k++; 
         }else if (a1[i] < a2[j])
             i++;
        else if (a2[j] < a3[k])
             j++;
 
         else
            k++;
    }
}



#include <bits/stdc++.h>
using namespace std;
    