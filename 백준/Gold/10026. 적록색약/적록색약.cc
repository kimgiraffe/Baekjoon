#include <iostream>
#include <cstring>

using namespace std;

int N, cnt = 0;
char a[101][101];
bool visit[101][101] = { false, };
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int x, int y)
{
	visit[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

		if (!visit[nx][ny] && a[x][y] == a[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	
	cout << cnt << " ";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i][j] == 'G') a[i][j] = 'R';
		}
	}

	memset(visit, false, sizeof(visit));

	cnt = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}