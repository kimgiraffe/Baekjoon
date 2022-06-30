#include <iostream>

using namespace std;

int dr[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dc[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
char map[1001][1001], ans[1001][1001];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> map[i];

	for (int r = 0; r < N; r++) {
		for (int c = 0; c < N; c++) {

			if (map[r][c] != '.') { ans[r][c] = '*'; continue; }
			int cnt = 0;

			for (int i = 0; i < 8; i++) {
				int nr = r + dr[i];
				int nc = c + dc[i];
				if (0 > nr || nr >= N || 0 > nc || nc >= N) continue;
				if (map[nr][nc] == '.') continue;
				cnt += map[nr][nc] - '0';
			}

			if (cnt >= 10) ans[r][c] = 'M';
			else ans[r][c] = cnt + '0';
		}
	}

	for (int i = 0; i < N; i++) cout << ans[i] << '\n';
}