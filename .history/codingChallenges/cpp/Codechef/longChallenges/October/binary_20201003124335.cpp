#include <iostream> 
using namespace std; 
  
void decToBinary(int n) { 
    int binaryNum[32]; 
    int a = n;
  
    int i = 0; 
    while (n > 0) { 
  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    cout << a <<  "------------";
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
  
int main() { 
    freopen("output1.txt","r",stdin);
    freopen("output.txt","a",stdout);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        decToBinary(n); 
        cout << endl;
    }
    return 0; 
}