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


bool GetNQueenSolution(vector<vector<int> >& board, int col){
	int size = board.size();
    // If we got a solution savi
	if (col == size){
		vector<int> v;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (board[i][j] == 1)
					v.push_back(j + 1);
			}
		}
		result.push_back(v);
		return true;
	}

	/* Consider this column and try placing
	this queen in all rows one by one */
	bool res = false;
	for (int i = 0; i < size; i++) {
		/* Check if queen can be placed on
		board[i][col] */
		if (isSafe(board, i, col)) {
			/* Place this queen in board[i][col] */
			board[i][col] = 1;

			// Make result true if any placement
			// is possible
			res = GetNQueenSolution(board, col + 1) || res;

			/* If placing queen in board[i][col]
			doesn't lead to a solution, then
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK
		}
	}

	/* If queen can not be place in any row in
		this column col then return false */
	return res;
}

/* This function solves the size Queen problem using
Backtracking. It mainly uses GetNQueenSolution() to
solve the problem. It returns false if queens
cannot be placed, otherwise return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/

vector<vector<int> > nQueen(int n)
{
	result.clear();
	vector<vector<int> > board(n, vector<int>(n, 0));

	if (GetNQueenSolution(board, 0) == false) {
		return {};
	}

	sort(result.begin(), result.end());
	return result;
}

// Driver Code
int main()
{
	int n = 4;
	vector<vector<int> > v = nQueen(n);

	for (auto ar : v) {
		cout << "[";
		for (auto it : ar)
			cout << it << " ";
		cout << "]";
	}

	return 0;
}
