#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
int main()
 {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int a;
    cin >> a;
    cout << a;


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); //three lines of code to speed up the input and output 
    //its always better to use scanf and printf  in program than cin and cout .we have to include the above library 
    // they will take less time
}