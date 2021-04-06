#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int max = INT_MIN,res;
    for(int i = 0; i < 6; i++){
        if(i +2 < 6){
        res = arr[i][i] + arr[i][i+1] + arr[i][i + 2] + arr[i + 1][i + 1] + arr[i + 2][i] + arr[i + 2][i + 1] + arr[i + 2][i + 2];
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
