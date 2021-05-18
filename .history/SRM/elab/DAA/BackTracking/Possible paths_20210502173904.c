#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 21
#define MOD 1000000007

typedef long long LL;

int N;
int u, v, k;
int graph[SIZE][SIZE];
int res[SIZE][SIZE];

void initRes()
{
	int i, j;
	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
		{
			if(i == j)
				res[i][j] = 1;
			else
				res[i][j] = 0;
		}
}

void matrixMultiply(int a[SIZE][SIZE], int b[SIZE][SIZE])
{
	int i, j, k;
	int c[SIZE][SIZE];

	memset(c, 0, sizeof(c));
	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			for(k = 0; k < N; k++)
				c[i][j] += a[i][k]*b[k][j];

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			a[i][j] = c[i][j];
}

void mQuickPow()
{
	initRes();
	while(k)
	{
		if(k&1)
			matrixMultiply(res, graph);
		k = k >> 1;
		matrixMultiply(graph, graph);
	}
}

int count()
{
	mQuickPow();

	return res[u][v];
}

int main(int argc, char *argv[])
{   
	int i, j;
	int T;

	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		for(i = 0; i < N; i++)
			for(j = 0; j < N; j++)
				scanf("%d", &graph[i][j]);
		scanf("%d%d%d", &u, &v, &k);
		printf("%d\n", count());
	}

    return 0;
}