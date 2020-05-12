#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#define printVect(vect,arrStruct) for(vector<arrStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define ll long long int 
#define loop(n) for(int i=0;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define testcase() int t; cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int minimumSwaps(int size, vec(int) arr) {

long long int i,count=0,j,temp,min,min_index;
for(i=0;i<size;i++)
{
    min=arr[i];
    min_index=i;
    for(j=i+1;j<size;j++)
    {
        if(arr[j]<min)
        {
            min=arr[j];
            min_index=j;
        }
    }
    if(min_index!=i)
    {
            count++;
            temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
    }
    }
return count;
}
int main()
 {
    EXECUTE_FASTER
    int n,m,a;
    testcase(){
        cin >> n >> m;
        vector <int> arr;
        loop(n){
            cin >> a;
            arr.pb(a);
        }
        
        int count  =  minimumSwaps(n,arr);
        cout << count << endl;
    }
    return 0;
 }