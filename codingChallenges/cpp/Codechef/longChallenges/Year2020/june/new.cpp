#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;
boxSum updateMap;
int printMatrix(ele start,ele end,matrix &mat){
    int count = 0;
    // cout << "---------custom-print----------" << endl << endl;
    cout << 2 << endl;
    for(int row = start.first ; row <= end.first ; row++){
        for(int col = start.second; col <= end.second; col++){
            cout << mat[row][col]  << " "  ; 
        }
        cout << endl;
    }
    // cout << "---------custom-print----------" << endl <<endl;
    
    return count;
}

int sumOfMatrix(ele start,ele end,matrix &mat){
    int count = 0;
    for(int row = start.first ; row <= end.first ; row++){
        for(int col = start.second; col <= end.second; col++){
            count += mat[row][col] ; 
        }
    }
    
    return count;
}

int Ask(ele start ,ele end,matrix &mat){
    int number;
    if(updateMap.find(box(start,end)) != updateMap.end()){
        return updateMap[box(start,end)];
    }
    cout << 1 << " " << start.first + 1 << " " << start.second + 1 << " " << end.first + 1 << " " << end.second + 1 << endl;
    cin >> number;
    updateMap.insert({box(start,end),number});
    return number;
}

void updateMatrix(matrix&mat, ele target,int sum){
    // cout << "matrix updated with sum " << sum <<":("<<target.first<<","<<target.second<<")\n";
    mat[target.first][target.second] = sum;
}

int startingFromTop(ele target,matrix &mat){
    // cout <<  "filling for tartget" << "("<< target.first <<"," << target.second << ")" <<endl;

    int num1,num2,num3,sum;
    num1 = Ask(ele (0,0),target,mat); 
    if(target.first - 1 < 0){
        num2 = 0;
    }else{
       ele  required((target.first) -1,target.second);
       num2 =  Ask(ele (0,0), required,mat); 
    }
    ele c(target.first,0);
    num3 = sumOfMatrix(c,target,mat);
    // cout << "startingFromtop  " << num1 << " " << " " << num2 << " " << num3 << endl;
    updateMatrix(mat,target,num1-num2-num3);
}

int startingFromLeft(ele target,matrix &mat){

    // cout <<  "filling for tartget  " << "("<< target.first <<"," << target.second << ")" <<endl;
    int num1,num2,num3,sum;
    
    num1 = Ask(ele (0,0),target,mat);
    if(target.second - 1 < 0){
        num2 = 0;
    }else{
        ele  required((target.first) ,target.second -1);
        num2 =  Ask(ele (0,0), required,mat);
    } 
    ele c(0,target.second);
    num3 = sumOfMatrix(c,target,mat);
    // cout << "startingFromLeft   " << num1 << " " << " " << num2 << " " << num3 << endl;
    updateMatrix(mat,target,num1-num2-num3);
    
}

int GuessNumberINRow(ele target,matrix &mat){
   
    return startingFromLeft(target,mat);
}

int GuessNumberINCol(ele target,matrix &mat){

    return startingFromTop(target,mat);
   
}



void guessMatrix(matrix &mat,int size){
    int x =1;
    ele current(0,0);
    int s = Ask(current,ele(0,size -1),mat);
    int t = Ask(ele(0,1),ele(0,size -1),mat);
    updateMatrix(mat,current,s - t);
    for (int i=0; i<size-1; i++){
                // printMatrix(ele(0,0),current,mat);

        for (int row = 0 ; row < x; row++ ){
            // cout << "updating " << row << "," << current.second+1 << endl;
            GuessNumberINCol(ele(row,current.second+1), mat);
        }

        x++;
        current.second += 1;

        for(int col = 0; col < x; col++) {
            //  cout << "updating " << current.first+1 << "," << col << endl;
            GuessNumberINRow(ele(current.first+1,col),mat);
        }
        current.first += 1;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        updateMap.clear();
        int n,p,x;
        cin >> n >> p;
        matrix pattern(n+2,vector<int> (n+2,0));
        guessMatrix(pattern,n);
        printMatrix(ele(0,0),ele(n-1,n-1),pattern);
        cin >> x;
    }

    return 0;
}