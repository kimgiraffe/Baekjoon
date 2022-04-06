#include <iostream>
#include <algorithm>

using namespace std;

int R, C, ans;
char arr[21][21];
bool visit[21];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int x, int y, int cnt)
{
	ans = max(ans, cnt);
	for (int i = 0; i < 4; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x < 0 || next_x >= R || next_y < 0 || next_y >= C)
			continue;
		if (visit[arr[next_x][next_y] -'A'] == false) {
			visit[arr[next_x][next_y] - 'A'] = true;
			dfs(next_x, next_y, cnt + 1);
			visit[arr[next_x][next_y] - 'A'] = false;
		}
	}

}

int main(void)
{

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> arr[i][j];
		}
	}

	visit[arr[0][0] - 'A'] = true;
	dfs(0, 0, 1);
	cout << ans;

	return 0;
}