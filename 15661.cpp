#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int N;
int ans = 987654321;
int S[21][21];
bool visited[21];

void solve(int idx, int num, int cnt) {
	if (num == cnt) {
		int cnt1 = 0, cnt2 = 0;
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= N; ++j) {
				if (visited[i] && visited[j]) {
					cnt1 += S[i][j];
				}
				else if (!visited[i] && !visited[j]) {
					cnt2 += S[i][j];
				}
			}
		}
		if (ans > abs(cnt1 - cnt2)) ans = abs(cnt1 - cnt2);
	}

	for (int i = idx; i <= N; ++i) {
		if (visited[i]) continue;
		visited[i] = true;
		solve(i, num, cnt + 1);
		visited[i] = false;
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);

	cin >> N;
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			cin >> S[i][j];
		}
	}

	for (int i = 2; i < N - 1; ++i) {
		memset(visited, false, sizeof(visited));
		solve(1, i, 0);
	}

	cout << ans;

	return 0;
}