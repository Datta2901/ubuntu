#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(s,e) for(int i = s; i <= e; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

bool AreTwoAreEqualToZero(int x1,int y1,int x2,int y2){
        if(x1 == 0 && y1 == 0 && y2 == 0 && x2 == 0){
            return false;
        }
    return true;    
}

bool isvalidCoordinates(int x1,int y1,int x2,int y2,int x3,int y3){
    if(x1 == 0 && y1 == 0 && y2 == 0 && x2 == 0 && x3 == 0 && y3 == 0){
        return false;
    }
    if(AreTwoAreEqualToZero(x1,y1,x2,y2)){
        if(AreTwoAreEqualToZero(x2,y2,x3,y3)){
            if(AreTwoAreEqualToZero(x3,y3,x1,y1)){
                return true;
            }
        }
    } 
    return false;
}

int GetDistanceBwPoints(int x1,int y1,int x2,int y2){
    int a = (pow((x2- x1),2));
    int b = (pow((y2 - y1),2));
    return ((a + b));
}

bool FindAnswer(int a,int b,int c){
    int maximum  = max(max(a,b),c);
    if(maximum == a){
        if(a == (b + c)){
            return true;
        }
        return false;
    }

    if(maximum == b){
        if(b == (a + c)){
            return true;
        }
        return false;
    }

    if(maximum == c){
        if(c == (b + a)){
            return true;
        }
        return false;
    }

}

int main(){
    EXECUTE_FASTER;
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        bool flag,skip;
        int x1,y1,x2,y2,x3,y3;
        cin >>  x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if(skip == false){
            continue;
        }
        int side1,side2,side3;
        side1 =  GetDistanceBwPoints(x1,y1,x2,y2);
        side2 = GetDistanceBwPoints(x2,y2,x3,y3);
        side3 = GetDistanceBwPoints(x3,y3,x1,y1);
        // cout << side1 << " " << side2 << " " << side3 << endl;
        flag = FindAnswer(side1,side2,side3);
        if(flag){
            count++;
            // cout << count << endl;
        }  
    }
    cout << count << endl;
    return 0;
}
