#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MAX_VALUE 1001
int N, M, V;
int map[MAX_VALUE][MAX_VALUE];
int visit[MAX_VALUE];
int queue[MAX_VALUE];
int rear, front;

void dfs(int vertex)
{
	int i;
	visit[vertex] = 1;
	printf("%d ", vertex);
	for (i = 1; i <= N; i++)
	{
		if (map[vertex][i] == 1 && !visit[i])
		{
			dfs(i);
		}
	}
}

void bfs(int vertex)
{
	int i;
	visit[vertex] = 0;
	printf("%d ", vertex);
	queue[rear++] = vertex;
	while (front < rear)
	{
		vertex = queue[front++];
		for (i = 1; i <= N; i++)
		{
			if (map[vertex][i] == 1 && visit[i])
			{
				visit[i] = 0;
				printf("%d ", i);
				queue[rear++] = i;
			}
		}
	}
}

int main(void)
{

	scanf("%d %d %d", &N, &M, &V);
	for (int i = 1; i <= M; i++)
	{
		int v1, v2;
		scanf("%d %d", &v1, &v2);
		map[v1][v2] = map[v2][v1] = 1;
	}
	dfs(V);
	printf("\n");
	bfs(V);

	return 0;
}