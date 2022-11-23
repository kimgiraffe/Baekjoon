#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

constexpr int MAX = 1000;

int R, C, k, sr, sc;
int M[MAX][MAX];
bool visited[MAX][MAX];
int dx[] = { 0, -1, 1, 0, 0 };
int dy[] = { 0, 0, 0, -1, 1 };
vector<int> v;

bool Move(int x, int y)
{
	for (int i = 1; i <= 4; ++i) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x >= 0 && next_y >= 0 && next_x < R && next_y < C) {
			if (M[next_x][next_y] == 0 && visited[next_x][next_y] == false) {
				return true;
			}
		}
	}
	return false;
}

void solve(int x, int y) {
	int dir_idx = 0;
	visited[x][y] = true;
	
	while (true) {
		if (Move(x, y) == false) break;

		while (true) {
			x += dx[v[dir_idx]];
			y += dy[v[dir_idx]];

			if (x < 0 || y < 0 || x >= R || y >= C) break;
			if (M[x][y] == 1) break;
			if (visited[x][y]) break;

			visited[x][y] = true;
		}
		x -= dx[v[dir_idx]];
		y -= dy[v[dir_idx]];
		dir_idx++;

		if (dir_idx == 5) dir_idx = 0;
	}

	cout << x << " " << y << '\n';
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	//freopen("input.txt", "r", stdin);

	cin >> R >> C >> k;
	while (k--) {
		int bc, rc;
		cin >> bc >> rc;
		M[bc][rc] = 1;
	}

	cin >> sr >> sc;

	for (int i = 0; i < 4; ++i) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	solve(sr, sc);

	return 0;
}