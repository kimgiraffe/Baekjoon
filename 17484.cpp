#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 10000000;
const int dir[3] = { -1,0,1 };
int N, M, ans = INF;
int board[7][7] = {};

int dp(int y, int x, int last) {
	if (y == N) return 0;

	int res = INF;
	for (int i = 0; i < 3; i++) {
		if (last == i) continue;
		if (x + dir[i] < 0 || x + dir[i] >= M) continue;

		res = min(res, dp(y + 1, x + dir[i], i) + board[y][x]);
	}
	return res;
}

int main(void)
{
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < M; i++) {
		ans = min(ans, dp(0, i, -1));
	}

	cout << ans << '\n';

	return 0;
}