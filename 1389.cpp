#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int r[101][101];
int sum[101] = { 0, };
int INF = 987654321;
int MIN = 987654321;

void floyd_warshall()
{
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= N; k++) {
				if (r[j][i] != INF && r[i][k] != INF)
					r[j][k] = min(r[j][k], r[j][i] + r[i][k]);
			}
		}
	}
}

int main(void)
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			r[i][j] = INF;
		}
	}

	while (M--) {
		int x, y;
		cin >> x >> y;
		r[x][y] = 1;
		r[y][x] = 1;
	}
	floyd_warshall();

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (j == i) {
				sum[i] -= r[i][j];
			}
			sum[i] += r[i][j];
		}
	}

	for (int i = 1; i <= N; i++) {
		if (MIN > sum[i]) {
			MIN = sum[i];
		}
	}
	int j;
	for (j = 1; j <= N; j++) {
		if (sum[j] == MIN)
			break;
	}

	cout << j;
	return 0;
}