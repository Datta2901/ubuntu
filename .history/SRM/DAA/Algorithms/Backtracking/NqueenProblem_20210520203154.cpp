#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > result;

bool isSafe(vector<vector<int> > board,int row, int col){
	int size = board.size();

    // column 
	for (int i = 0; i < col; i++){
		if (board[row][i]){
			return false;
        }
    }

    // one diagonal 
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--){
		if (board[i][j]){
			return false;
        }
    }

    // other diagonal
	for (int i = row, j = col; j >= 0 && i < size; i++, j--){
		if (board[i][j]){
			return false;
        }
    }

	return true;
}


bool CheckingForParticularCOl(vector<vector<int> >& board, int col){
	int size = board.size();
    // If we got a solution,adding to result
	if (col == size){
		vector<int> v;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if(board[i][j] == 1){
                    // adding column number
					v.push_back(j + 1);
                }
			}
		}
		result.push_back(v);
		return true;
	}

	bool res = false;
	for (int i = 0; i < size; i++) {
		if (isSafe(board, i, col)) {
			board[i][col] = 1;
            //get the answer for particular call
			res = CheckingForParticularCOl(board, col + 1) || res;
            //make that again to 0,for other calls
			board[i][col] = 0;
		}
	}

	return res;
}


vector<vector<int> > GetRequiredSol(int n){
	result.clear();
	vector<vector<int> > board(n, vector<int>(n, 0));

    // Starting the recursive function by passing 0th column
	if (CheckingForParticularCOl(board, 0) == false) {
        //no path
		return {};
	}
    // getting result
	return result;
}


void PrintResults(vector<vector<int> > result){
    for (auto result : v) {
		cout << "[";
		for (auto it : result)
			cout << it << " ";
		cout << "]";
	}
}

int main(){
	
	vector<vector<int> > v = GetRequiredSol(n);


	return 0;
}
