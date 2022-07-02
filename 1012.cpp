#include <iostream>
#include <cstring>

using namespace std;

int N, M, K, x, y;
bool arr[50][50];
bool visit[50][50];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

bool dfs(int y, int x) {
	if (visit[y][x]) return false;
	visit[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < M && ny < N && arr[ny][nx])
			dfs(ny, nx);
	}
	return true;
}

int main(void) {
	int T;
	cin >> T;
	while(T--) {
		cin >> M >> N >> K;
		memset(arr, 0, sizeof(arr));
		memset(visit, 0, sizeof(visit));

		while(K--) {
			cin >> x >> y;
			arr[y][x] = 1;
		}

		int cnt = 0;

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (arr[j][k] && !visit[j][k]) {
					if (dfs(j, k)) cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}