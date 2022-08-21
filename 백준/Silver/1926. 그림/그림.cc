#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;


int n, m;
int a[501][501];
bool visited[501][501]{ false, };
int ans;
int dr[4] = { 1,0,-1,0 };
int dc[4] = { 0,-1,0,1 };
queue <pair<int, int>> q;
int ans_sum = -1e9;

void bfs(int x, int y)
{
	visited[x][y] = true;
	q.push(make_pair(x, y));
	int sum = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int next_x = x + dr[i];
			int next_y = y + dc[i];
			if (next_x < 0 || next_y < 0 || next_x >= n || next_y >= m) continue;
			if (visited[next_x][next_y]) continue;
			if (a[next_x][next_y] == 0) continue;

			visited[next_x][next_y] = true;
			q.push(make_pair(next_x, next_y));
			++sum;
		}



	}

	ans_sum = max(sum, ans_sum);

}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visited[i][j] && a[i][j])
			{
				++ans;
				bfs(i, j);
			}
		}
	}

	if (ans_sum < 0) ans_sum = 0;
	cout << ans << '\n' << ans_sum;
}

