#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_VERTEX 101

using namespace std;

int num, e;
int cnt = 0;
int map[MAX_VERTEX][MAX_VERTEX] = {};
int visit[MAX_VERTEX] = {};
int queue[MAX_VERTEX] = {};
int rear, front;

void bfs(int vertex)
{
	visit[vertex] = 1;
	queue[rear++] = vertex;

	while (front < rear) {
		vertex = queue[front++];
		for (int i = 1; i <= num; i++) {
			if (map[vertex][i] == 1 && !visit[i]) {
				visit[i] = 1;
				cnt++;
				queue[rear++] = i;
			}
		}
	}
}

int main(void)
{
	int v1, v2;

	cin >> num >> e;
	for (int i = 1; i <= e; i++) {
		cin >> v1 >> v2;

		map[v1][v2] = map[v2][v1] = 1;
	}

	bfs(1);
	cout << cnt;

	return 0;
}