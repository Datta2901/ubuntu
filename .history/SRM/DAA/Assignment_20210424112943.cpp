#include <bits/stdc++.h>
#define MAX 5
using namespace std;

bool isSafe(int row, int col, int m[][MAX], int n, bool visited[][MAX])
{
    if (row == -1 || row == n || col == -1 ||
    col == n || visited[row][col]
    || m[row][col] == 1)
    return false;

return true;
}

void printPathUtil(int row, int col, int m[][MAX],  int n, string& path, vector<string>& possiblePaths, bool visited[][MAX],int cost[][MAX], vector<int>& possibleCost, int co)
{
if (row == -1 || row == n || col == -1
|| col == n || visited[row][col]
|| m[row][col] == 1)
return;

if (row == 0 && col == n-1) {
possiblePaths.push_back(path);
possibleCost.push_back(co);
return;
}
visited[row][col] = true;

if (isSafe(row + 1, col, m, n, visited))
{
path.push_back('D');
co+=cost[row][col];
printPathUtil(row + 1, col, m, n,
path, possiblePaths, visited,cost,possibleCost,co);
path.pop_back();
co-=cost[row][col];
}
if (isSafe(row, col - 1, m, n, visited))
{
path.push_back('L');
co+=cost[row][col];
printPathUtil(row, col - 1, m, n,
path, possiblePaths, visited,cost,possibleCost,co);
path.pop_back();
co-=cost[row][col];
}
if (isSafe(row, col + 1, m, n, visited))
{
path.push_back('R');
co+=cost[row][col];
printPathUtil(row, col + 1, m, n,
path, possiblePaths, visited,cost,possibleCost,co);
path.pop_back();
co-=cost[row][col];
}

if (isSafe(row - 1, col, m, n, visited))
{
path.push_back('U');
co+=cost[row][col];
printPathUtil(row - 1, col, m, n,
path, possiblePaths, visited,cost,possibleCost,co);
path.pop_back();
co-=cost[row][col];
}

visited[row][col] = false;
}

void printPath(int m[MAX][MAX], int n, int cost[MAX][MAX])
{
vector<string> possiblePaths;
vector<int> possibleCost;
int co=0;
string path;
bool visited[n][MAX];
memset(visited, false, sizeof(visited));


printPathUtil(n-1, 0, m, n, path,
possiblePaths, visited,cost,possibleCost,co);
if(possiblePaths.size()==0)
{
cout<<"No path found";
}
else
{
int minp=0;
cout<<"Possible Paths Cost"<<endl;
for (int i = 0; i < possiblePaths.size(); i++)
{
cout << possiblePaths[i] << "\t "<<possibleCost[i]<<endl;
if(possibleCost[i]<possibleCost[minp])
{
minp=i;
}
}
cout<<"Minimum Cost of maze is : ";
cout<<"("<<possiblePaths[minp]<<") "<<possibleCost[minp];
}
}
int main()
{
int m[MAX][MAX] = { { 1, 0, 0, 0, 0 },
        { 1, 0, 0, 1, 0 },
        { 0, 0, 0, 0, 0 },
        { 1, 0, 1, 0, 1 },
        { 0, 0, 0, 0, 1 } };
int cost[MAX][MAX]={ { 1, -2, 3, -4, 5 },
{ 6, 7, -8, 9, 10  },
{ 11, -12, 13, -14, 15 },
{ 16, 17, 18, 19, 20 },
{ 21, 22, 23, 24, 25 } };
int n = sizeof(m) / sizeof(m[0]);
printPath(m, n, cost);

return 0;
}