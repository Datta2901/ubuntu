#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(s,e) for(int i = s; i <= e; i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)
typedef long long int ll;

bool isInt(double a){
    int c;
    c = int(a);
    if(a == c){
        return true;
    }
    return false;
}

ll percent(ll num1,ll num2){
    if(num1 != 0 && num2 != 0){
        return(max(num1,num2) % min(num1,num2));
    }
   
}

bool ischeckZero(ll a, ll b, ll c, ll p,ll q, ll r){
    if(a == p && b == q && c == r){
        cout << 0 << endl;
        return true;
    }
    return false;
}

bool ischeckOne(ll a,ll b,ll c, ll p, ll q, ll r){
    ll diff1 =a - p;
    ll diff2 = b - q;
    ll diff3 = c - r;
    double q1,q2,q3;
     if(a == 0){
        q1 =0;
    }else{
        q1 = p /a;
    }
    if(b == 0){
        q2 = 0;
    }else{
        q2 = q / b;
    }if(c == 0){
        q3 = 0;
    }else{
        q3 = r / c;
    }
    if(p == 0 && q == 0 && r == 0){
        return true;
    }else if((a == p && b == q) || (a == p && c == r) ||(b == q && c == r)){
        return true;
    }else if((a == p && (diff2 == diff3 || q2 == q3)) || (b == q && (diff1 == diff3 || q1 == q3)) ||( c == r && (diff1 == diff2 || q1 == q2))){
        return true;
    }else if(diff1 == diff2 && diff2 == diff3 && diff1 == diff3){
        return true;
    }else if(q1 == q2 && q2 == q3 && q3 == q1 && isInt(q1)){
        return true;
    }

    return false;
}

bool ischeckTwo(ll a,ll b,ll c, ll p, ll q, ll r){
    ll q1,q2,q3,r1,r2,r3;
    if(a == 0){
        q1 =0;
        r1 = p;
    }else{
        q1 = p /a;
        r1 = p % a;
    }
    if(b == 0){
        q2 = 0;
        r2 = q;
    }else{
        q2 = q / b;
        r2 = q % b;
    }if(c == 0){
        q3 = 0;
        r3 = r;
    }else{
        q3 = r / c;
        r3 = r % c;
    }
    vector<int> diff;
    diff.pb(a - p);
    diff.pb(b - q);
    diff.pb(c - r);
    inc_sort(diff);
    if(diff[2] - diff[1] == diff[1] - diff[0]){
        return true;
    }if(diff[1] + diff[0] == diff[2]){
        return true;
    }
    if((a == p && b != q && c != r ) || (a != p && b == q && c != r ) || (a != p && b != q && c == r )){
        return true;
    }else if(q1 == q2 && q1 == q3 && q2 == q3 && r1 != r2 && r2 != r3 && r3 != r1 && q1 == 1 && q2 ==1 && q3 == 1){
        return true;
    }else if(((q1 != q2 && q1 == 1 && q2 == q3) || (q1 != q2 && q2 == 1 && q1 == q3) || (q3 != q2 && q3 == 1  && q1 == q3)) &&( r1 == r2 && r2 == r3 && r3 == r1)){
        return true;
    }else if((q1 == q2 && q2 == q3) && ((r1 != r2 && r1 == 0 && r2 == r3) || (r2 != r3 && r2 == 0 && r1 == r3) || (r3 != r1 && r3 == 0 && r1 == r2))){
        return true;   
    }else if((q1 == q2 && r1 == r2) || (q2 == q3 && r2 == r3) || (q1 == q3 && r1 == r3)){
        return true;
    }else if(q1 == q2 && q2 == q3 && q3 == q1){
        return true;
    }else if((q1 != 0 && q2 != 0 && q3 != 0)){
        if(((percent(q1,q2) == 0 || percent(q2,q3) == 0 || percent(q3,q1) == 0)) && ( r1 == r2 && r2 == r3 && r3 == r1 && r1 == 0 && r2 == 0 && r3 == 0)){
            return true;
        }    
    }
    else if(q1 == q2 && q2 == q3 && q3 == q1 && r1 == r2 && r2 == r3 && r3 == r1){
        return true;
    }
    return false;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","a",stdout);
    int t;
    cin >> t;
    while(t--){
    long long int a,b,c,p,q,r;
    cin >> a >> b >> c ;
    cin >> p >> q >> r;
    if(ischeckZero(a,b,c,p,q,r)){
        continue;
    }if(ischeckOne(a,b,c,p,q,r)){
        cout << 1 << endl;
        continue;
    }if(ischeckTwo(a,b,c,p,q,r)){
        cout << 2 << endl;
        continue;
    }else{
        cout << 3 << endl;
    }


    }
    return 0;
}