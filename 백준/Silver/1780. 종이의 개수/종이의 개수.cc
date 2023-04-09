#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int N;
int p[2187][2187];
int cnt[3];
bool check(int x, int y, int n) {
	int start = p[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (start != p[i][j])
				return false;
		}
	}
	return true;
}

void solve(int x, int y, int n) {
	if (check(x, y, n)) {
		cnt[p[x][y]]++;
	}
	else {
		int size = n / 3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				solve(x + size * i, y + size * j, size);
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> p[i][j];
			p[i][j]++;
		}
	}

	solve(0, 0, N);
	cout << cnt[0] << "\n" << cnt[1] << "\n" << cnt[2];

	return 0;
}