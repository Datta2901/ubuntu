#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define vv vector
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define MOD 1000000007
#define ll long long int 
#define l long int
#define loop(n)for(int i = 0; i < n; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum;

int getCount(vec(int) numbers,int target){
    int count = 0,control = 0,sum = 0;
    bool flag = false ;
    for(int i = numbers.size()-1 ; i >= 0; i--){
        count++;
        sum += numbers[i];
        if(sum >= target){
            sum = 0;
            control++;
        }
        if(control == 2){
            flag = true;
            break;
        }
    }
    if(flag){
        return count;
    }
    return -1;
}

int GetSumOfElements(vector<int> numbers){
    int sum = 0;
    for(auto &it : numbers){
        sum += it;
    }
    return sum;
}

int ChooseAnotherMethod(vector<int> numbers,int target){
    int sum1 = 0,sum2 = 0,answer = 0;
    bool fir
    for(int i = numbers.size(); i > 0; i = i - 2){
        if(sum1 < target){
            sum1 += numbers[i];
        }if(sum1 >= target){
            i++;
        }if(sum2 < target){
            sum2 += numbers[i - 1];
        }
    }

}


int main(){
    EXECUTE_FASTER
    testcase(){
        int size,RequiredSum;
        cin >> size >> RequiredSum;
        vec(int) numbers;
        vectorInput(numbers,size);
        if(size == 1){
            cout << -1 << endl;
            continue;
        }
        inc_sort(numbers);
        int answer = getCount(numbers,RequiredSum);
        if(answer != -1){
            cout << answer << endl;
            continue;
        }
        cout << "Another method to be followed " << endl;
    }
   return 0;
}