#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int map[50][50];
bool visited[50][50];
int w, h;
int land_num = 0;

int dw[8] = { 1,0,-1,0,1,1,-1,-1 };
int dh[8] = { 0,1,0,-1,-1,1,-1,1 };

void dfs(int h, int w)
{
	queue<pair<int, int>> q;
	q.push(make_pair(h, w));

	visited[h][w] = true;
	while (!q.empty()) {
		h = q.front().first;
		w = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int nh = h + dh[i];
			int nw = w + dw[i];

			if (0 <= nw && 0 <= nh && nw < 50 && nh < 50) {
				if (map[nh][nw] && !visited[nh][nw]) {
					visited[nh][nw] = true;
					dfs(nh, nw);
				}
			}
		}
	}
}

int main(void)
{
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] && !visited[i][j]) {
					land_num++;
					dfs(i, j);
				}
			}
		}

		cout << land_num << '\n';

		memset(map, false, sizeof(map));
		memset(visited, false, sizeof(visited));
		land_num = 0;
	}

	return 0;
}