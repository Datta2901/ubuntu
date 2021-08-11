#include <bits/stdc++.h>
using namespace std;

int mindays(int input1, int input2)
{
    int n, count = 1, flag, i = 2, j;
    n = input2;
    vector<int> ans;
    int x = input1;
    if (input1 == 0)
        return 0;
    while (count <= n)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            ans.push_back(i);

            count++;
        }
        i++;
    }
    int p = ans.size() - 1;
    int c = 0;
    while (x != 0)
    {
        if (x == 1)
        {
            x = x + ans[p];
            p--;
            c--;
            if(p == -1){
	            return -1;
	        }
        }
        if (x >= ans[p])
        {
            c = c + (x / ans[p]);
            x = x % ans[p];
        }
        else
        {
            p--;
        }
    }
    return c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << mindays(a, b) << endl;

    return 0;
}