#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int map[100][100];
bool visit[100][100];
int N;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void init_map()
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[i][j] = 0;
		}
	}
}

void init_visit()
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			visit[i][j] = false;
		}
	}
}

void dfs(int x, int y)
{
	visit[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N) {
			if (map[next_x][next_y] > 0 && !visit[next_x][next_y]) {
				visit[next_x][next_y] = true;
				dfs(next_x, next_y);
			}
		}
	}
}

int main(void)
{
	int cnt = 0, max_cnt = 0;

	int max = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
			if (max < map[i][j])
				max = map[i][j];
		}
	}

	for (int k = 1; k <= max; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] > 0 && !visit[i][j]) {
					cnt++;
					dfs(i, j);
				}
			}
		}

		if (max_cnt < cnt) {
			max_cnt = cnt;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] > 0) {
					--map[i][j];
				}
			}
		}

		init_visit();
		cnt = 0;
	}

	printf("%d\n", max_cnt);

	return 0;
}