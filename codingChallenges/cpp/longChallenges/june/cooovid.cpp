#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define twoD(size,n) for(int i = 0 ; i < size; i++) for(int j = 0; j < n; j++) 
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;
int global_N = 0;
int sumOfMatrix(ele start,ele end,matrix &mat);
void updateMap(boxSum &a,ele start,ele end,int sum);
int  GetSumofBox(boxSum &a,ele start,ele end,matrix &mat);

string pointRange(ele start, ele end) {
    return "(" + to_string(start.first) + "," + to_string(start.second) + ")"+ "("  + to_string(end.first)  + "," + to_string(end.second) + ")" ;
}

void updateMatrix(matrix&mat, ele target,int sum){
    cout << "matrix updated with sum " << sum <<":("<<target.first<<","<<target.second<<")\n";
    mat[target.first][target.second] = sum;
}

void printMap(boxSum &a){
    cout << "-----map---------\n";
    for (boxSum::iterator itr = a.begin(); itr!= a.end();itr++){
        std::cout << "("<<(itr->first.first.first) << itr->first.first.second << ")-("<< (itr->first.second.first) << itr->first.second.second<<")" << ":" << itr->second << endl;
    }
    cout << "------mapend------\n";
}

ele makeValid(ele point) {
    if (point.first == 0) {
        point.first = 1;
    }

     if (point.first == global_N) {
        point.first = global_N-1;
    }

     if (point.second == 0) {
        point.second= 1;
    }

     if (point.second == global_N) {
        point.second= global_N-1;
    }

    return point;
}

bool IsNotValid(ele s, ele e) {
    if (s.first == 0 || s.second == 0 || e.first == 0 || e.second == 0 ){
        return true;
    }

    if (s.first == global_N || s.second == global_N || e.first == global_N || e.second == global_N ){
        return true;
    }

     if (s.first <= -1 || s.second <=-1    || e.first <= -1   || e.second <= -1 ){
         cout << "truly invalid" << endl;
        return true;
    }

    return false;
}

int RowDifference(ele a,ele b){
    return abs(a.first - b.first);
}

int ColumnDifference(ele a ,ele b){
    return abs(a.second - b.second);
}

int Ask(ele start ,ele end, boxSum &a,matrix &mat){
   if(start.first > end.first || start.second > end.second){
       return 0;
   }

    if (a.find(box(start,end))!= a.end()){
        return a[box(start,end)];
    }

    int number;
    cout << 1 << " " << start.first << " " << start.second  << " " << end.first  << " " << end.second  << endl;
    cin >> number;
    updateMap(a,start,end, number);
    return number;
}

int printMatrix(ele start,ele end,matrix &mat){
    int count = 0;
    cout << "---------custom-print----------" << endl << endl;
    for(int row = start.first ; row <= end.first ; row++){
        for(int col = start.second; col <= end.second; col++){
            cout << mat[row][col]  << " "  ; 
        }
        cout << endl;
    }
    cout << "---------custom-print----------" << endl <<endl;
    
    return count;
}

int startingFromTop(ele target,boxSum &a,matrix &mat){
    cout <<  "filling for tartget" << "("<< target.first <<"," << target.second << ")" <<endl;

    int num1,num2,num3,sum;
    ele  required((target.first) -1,target.second),c,d;
    num1 = Ask(ele (1,1),target,a,mat); 
    num2 =  Ask(ele (1,1), required,a,mat);
    c.first = target.first - 1;
    c.second = 1;
    num3 = GetSumofBox(a,c,target,mat);
    
    cout << "startingFromtop  " << num1 << " " << " " << num2 << " " << num3 << endl;
    // cout << "startingFromtop  " << num2 << endl;
    updateMatrix(mat,target,num1-num2-num3);
}

int startingFromDown(ele target,boxSum &a,matrix &mat,ele end){
    ele newEnd(end.first,end.second+1);

    cout <<  "filling for tartget  " << "("<< target.first <<"," << target.second << ")" <<endl;

    int num1,num2,num3;
    ele b,c,d;
    b.first = target.first - 1;
    b.second =  1;
    num1 = Ask(b,newEnd,a,mat);
    c.first = target.first;
    c.second = 1;
    num2 = Ask(c,newEnd,a,mat);
    d.first = target.first;
    d.second = target.second-1; 
    num3 =GetSumofBox(a,c,d,mat);

     cout << "startingFromDown  " << num1 << " " << " " << num2 << " " << num3 << endl;
    //  cout << "startingFromDown  " << num2 << endl;
    updateMatrix(mat,target,num1-num2-num3);

}

int GuessNumberINCol(ele target,matrix &mat,ele end,ele start,boxSum &a){
   if(RowDifference(target,start) >= RowDifference(target,end)){
       return startingFromTop(target,a,mat);
   }
    return startingFromDown( target,a,mat,end);
}

int startingFromLeft(ele target,boxSum &a,matrix &mat){

    cout <<  "filling for tartget  " << "("<< target.first <<"," << target.second << ")" <<endl;
    int num1,num2,num3,sum;
    
    num1 = Ask(ele (1,1),target,a,mat); 
    ele  required((target.first) ,target.second -1),c,d;
    num2 =  Ask(ele (1,1), required,a,mat);
    c.first = 1;
    c.second = target.second -1;
    num3 = GetSumofBox(a,c,target,mat);
    cout << "startingFromLeft   " << num1 << " " << " " << num2 << " " << num3 << endl;
    // cout << "startingFromLeft  " << num2 << endl;
    updateMatrix(mat,target,num1-num2-num3);
    
}

int startingFromRight(ele target,boxSum &a,matrix &mat,ele end){
    cout <<  "filling for tartget" << "("<< target.first <<"," << target.second << ")" <<endl;

    int num1,num2,num3;
    ele newEnd(end.first,end.second+1);
    ele b,c,d;
    b.first = 1;
    b.second = target.second -1 ;
    num1 = Ask(b,newEnd,a,mat);
    c.first = 1;
    c.second = target.second;
    num2 = Ask(c,newEnd,a,mat);
    d.first = target.first - 1;
    d.second = target.second; 
    num3 =GetSumofBox(a,c,d,mat);
    cout << "startingFromRight  " << num1 << " " << " " << num2 << " " << num3 << endl;
    // cout << "startingFromRight  " << num2 << endl;

    updateMatrix(mat,target,num1-num2-num3);
}


int GuessNumberINRow(ele target,matrix &mat,ele end,ele start,boxSum &a){
   if(ColumnDifference(target,start) >= ColumnDifference(target,end)){
       return startingFromLeft(target,a,mat);
   }
    return startingFromRight( target,a,mat,end);
}

void guessMatrix(matrix &mat, boxSum &a, int size){
    ele current(1,1);
    int s = Ask(current,current,a,mat);
    updateMatrix(mat,current,s);
    for (int i=0; i<size-1; i++){
                printMatrix(ele(1,1),current,mat);

        for (int row = 1 ; row <=current.first; row++ ){
            GuessNumberINCol(ele(row,current.second+1), mat, current,ele(1,1),a);
        }

        current.second += 1;

        for(int col = 1; col <=current.second; col++) {
            GuessNumberINRow(ele(current.first+1,col),mat,current,ele(1,1),a);
        }

        current.first += 1;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p;
        int x,c,count = 0;
        cin >> n >> p;
        matrix pattern(n+2,vector<int> (n+2,0));
        boxSum a =  boxSum();
        global_N = n+1;
        guessMatrix(pattern,a,n);

        printMatrix(ele(0,0),ele(n+1,n+1),pattern);
    }

    return 0;
}

int sumOfMatrix(ele start,ele end,matrix &mat){
    int count = 0;
    for(int row = min(start.first,end.first) ; row <= max(end.first,start.first) ; row++){
        for(int col = min(start.second, end.second); col <= max(end.second,start.second); col++){
            count += mat[row][col] ; 
        }
    }
    
    return count;
}

void updateMap(boxSum &a,ele start,ele end,int sum){
    if (a.find(box(start,end)) != a.end()) {
        cout << "map already contains given element" <<endl;
    }
    a[box(start,end)] = sum;
    // cout << "map updated with " << a[box(start,end)] << " for " << "(" <<  start.first <<","<<start.second<<")"<< "(" <<  end.first <<","<<end.second<<")" <<  endl;
    cout << "map updated with" << a[box(start,end)] <<"  for " << pointRange(start,end) << endl;
    return;
}




int  GetSumofBox(boxSum &a,ele start,ele end,matrix &mat){
    start = makeValid(start);
    end =makeValid(end);
    boxSum::iterator it = a.find(box(start,end));
    int sum;
    if(it == a.end()){
        sum = sumOfMatrix(start,end,mat);
        updateMap(a,start,end,sum);
        return sum;
    }
    return it->second;
}

