#include <iostream>
#include <queue>

using namespace std;

int N, r1, c1, r2, c2;
int board[200][200];
bool visit[200][200] = { false, };
int dx[6] = { -2, -2, 0, 0, 2, 2 };
int dy[6] = { -1, 1, -2, 2, -1, 1 };

void bfs(int x, int y) {
	int d = 0;
	visit[x][y] = true;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		if (x == r2 && y == c2) {
			d = board[x][y];
		}
		q.pop();

		for (int i = 0; i < 6; i++) {
			int next_x = x + dx[i];
			int next_y = y + dy[i];

			if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N) {
				if (!visit[next_x][next_y]) {
					visit[next_x][next_y] = true;
					board[next_x][next_y] = board[x][y] + 1;
					q.push(make_pair(next_x, next_y));
				}
			}
		}
	}
	if (d == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << d << '\n';
	}
}

int main(void)
{
	cin >> N;
	cin >> r1 >> c1 >> r2 >> c2;
	bfs(r1, c1);
	return 0;
}