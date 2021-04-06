#include<bits/stdc++.h>
using namespace std;

// int EditDist(string a ,string b){
//     int aSize = a.size() + 1,bSize = b.size() + 1;
//     int dp[aSize + 1][bSize + 1];
//     for(int i = 0; i <= aSize; i++){
//         for(int j = 0; j <= bSize; j++){
//             if(i == 0){
//                 dp[i][j] = j;
//             }else if(j == 0){
//                 dp[i][j] = i;
//             }else if(a[i] == b[j]){
//                 dp[i][j] = dp[i - 1][j -1];
//             }else{
//                 dp[i][j] = 1 + min(min(dp[i][j-1],dp[i - 1][j]),dp[i - 1][j - 1]);
//             }                        //insert     remove        modify
//         }
//     }
//     return dp[aSize][bSize];
// }

int editDistDP(string str1, string str2, int m, int n)
{
	// Create a table to store results of subproblems
	int dp[m + 1][n + 1];

	// Fill d[][] in bottom up manner
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			// If first string is empty, only option is to
			// insert all characters of second string
			if (i == 0)
				dp[i][j] = j; // Min. operations = j

			// If second string is empty, only option is to
			// remove all characters of second string
			else if (j == 0)
				dp[i][j] = i; // Min. operations = i

			// If last characters are same, ignore last char
			// and recur for remaining string
			else if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			// If the last character is different, consider
			// all possibilities and find the minimum
			else
				dp[i][j]
					= 1
					+ min(min(dp[i][j - 1], // Insert
							dp[i - 1][j]_, // Remove
							dp[i - 1][j - 1]); // Replace
		}
	}

	return dp[m][n];
}

int main(){
    string a,b;
    cin >> a >> b;
    // cout << EditDist(a,b) << endl;
    cout << editDistDP(a,b,a.size(),b.size()) << endl;
}