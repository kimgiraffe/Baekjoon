#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;
int r[51][51];
int INF = 987654321;
int MAX = -1;

void floyd_warshall()
{
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= N; k++) {
				if (j == k) continue;
				r[j][k] = min(r[j][k], r[j][i] + r[i][k]);
			}
		}
	}
}

int main(void)
{
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			r[i][j] = INF;
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			char ch;
			cin >> ch;
			if (ch == 'Y') {
				r[i][j] = 1;
				r[j][i] = 1;
			}
		}
	}

	floyd_warshall();

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (r[i][j] == INF || i == j) {
				r[i][j] = 0;
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		int cnt = 0;
		for (int j = 1; j <= N; j++) {
			if (r[i][j] >= 1 && r[i][j] <=2) {
				cnt++;
			}
		}
		MAX = max(cnt, MAX);
	}

	cout << MAX;
	return 0;
}