#include <iostream> 
using namespace std; 
  
void decToBinary(int n) 
{ 
    int binaryNum[32]; 
  
    int i = 0; 
    while (n > 0) { 
  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
  
int main() 
{ 
    freopen("input.txt","r",stdin);
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