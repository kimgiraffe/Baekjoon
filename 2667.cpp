#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
char map[26][26] = {};
int cnt = 0;
vector<int> people;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= N) continue;
		if (map[next_x][next_y] == '1') {
			cnt++;
			map[next_x][next_y] = '2';
			dfs(next_x, next_y);
		}
	}
}

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == '1') {
				cnt = 1;
				map[i][j] = 2;
				dfs(i, j);
				people.push_back(cnt);
			}
		}
	}

	cout << people.size() << '\n';
	sort(people.begin(), people.end());
	for (int i = 0; i < people.size(); i++)
		cout << people[i] << '\n';

	return 0;
}