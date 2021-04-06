#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define us unordered_set
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

int main(){
     EXECUTE_FASTER
    testcase(){
        int size;
        cin >> size;
        long int xcoordinate,ycoordinate;
        unordered_set<long int> firstAxis,secondAxis;       //time complexity is O(1) for insert and erase
        loop(4 * size - 1){
            cin >> xcoordinate >> ycoordinate;
            xcoordinate = (firstAxis.count(xcoordinate) == 1)  ? firstAxis.erase(xcoordinate),xcoordinate  : xcoordinate;firstAxis.insert(xcoordinate);
            // if the element is already there then remove it , otherwise add the element
            ycoordinate = (secondAxis.count(ycoordinate) == 1) ? secondAxis.erase(ycoordinate),xcoordinate : ycoordinate; secondAxis.insert(ycoordinate);
            //if the element is already there then remove it , otherwise add the element
        }
        /*  2 2         xcoordinate     ycoordinate
                            2               2
            1 1
                            1               1

            2 1
                            removed 2       removed 1

                        remaining elements are 1 2
        */
        vector<long int> x_axis,y_axis;
        x_axis.assign(firstAxis.begin(),firstAxis.end());       //copying the elements of set into vector
        printVect(x_axis,long int);
        y_axis.assign(secondAxis.begin(),secondAxis.end());
        printVect(y_axis,long int)
        cout << x_axis[0] << " " <<  y_axis[0] << endl;         // printing the required fourth point
    }
    return 0;
}