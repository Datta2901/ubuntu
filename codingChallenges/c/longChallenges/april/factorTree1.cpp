#include<iostream>
#include <iterator>
#include <map>
#include <vector>
#include<string.h>
#include<cmath>
#define max 1000000007

using namespace std ;

vector<int> getPath(vector< vector<int> > data, int currentNode, int key, int* covered) {
    covered[currentNode]= 1 ; 
    vector<int> p;
    if(currentNode == key){
        p.push_back(currentNode);
        return p;
    }

    for(int i=0; i< data[currentNode].size(); i++) {
        if (covered[data[currentNode][i]] == 0 ){
            covered[currentNode] = 1;
            p = getPath(data,data[currentNode][i],key,covered);
            if(p.size() > 0){
                p.insert(p.end(),currentNode);
            }
            return p;
        }
    }

    return p;

}

long long int getNumber(vector <int>path,vector <int>costTree) {
        long long int product=1 ;
        for(int i = 0; i < path.size(); i++) {
            product *= (costTree[path[i]-1]) % max ;
            product = product % max ; 
        }

        return product ;
}

int getFactors(int number) 
{ 
    int count = 0; 
    for (int i = 1; i <= sqrt(number); i++) { 
        if (number % i == 0) {  
            if (number / i == i) 
                count++; 
  
            else  
                count = count + 2; 
        } 
    } 
    return count; 
} 

  

int main(){
    int t ;
    int node1,node2;
    vector<int> temp;
    int n,a;long long int number,answer ;
    cin >> t ;
    while(t--){
        cin >> n ;
        vector< vector<int> > arr(n+1);
        for(int i=0; i<n-1; i++) {
            cin >> node1 >> node2;
            temp = arr[node1];
            temp.insert(temp.end(), node2);
            arr[node1] = temp;
            
            temp = arr[node2];
            temp.insert(temp.end(), node1);
            arr[node2] = temp;
        }


        vector <int> costTree ;
        for(int i = 0; i < n; i++){
            cin>>a ;
            costTree.push_back(a) ;
        }
        int qnum ;
        cin >> qnum ;
        
        int query[qnum][2];
        int covered[n+1]={0};
        vector<int> path;
        for (int i = 0; i < qnum; i++){
            cin >> query[i][0] >> query[i][1];
            path = getPath(arr, query[i][0], query[i][1], covered);
            for (int i=0 ; i < path.size(); i++) {
                cout << path[i] << " ";
            }
                                                                  
            number = getNumber(path,costTree);
            answer =getFactors(number);
            cout<<answer%max<<endl;
        } 

    }
    return 0 ;    
}

