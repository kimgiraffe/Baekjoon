#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int s[3][100001] = {};
int dp[3][100001] = {};
int n;

int Max(int A, int B) {
	return A > B ? A : B;
}

void sol() {
	dp[1][1] = s[1][1];
	dp[2][1] = s[2][1];
	for (int i = 2; i <= n; i++) {
		dp[1][i] = Max(dp[2][i - 1], dp[2][i - 2]) + s[1][i];
		dp[2][i] = Max(dp[1][i - 1], dp[1][i - 2]) + s[2][i];
	}
	cout << Max(dp[1][n], dp[2][n]) << '\n';
}

int main(void)
{

	int T;
	cin >> T;
	while (T--) {
		memset(dp, 0, sizeof(dp));
		cin >> n;
		for (int i = 1; i <= 2; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> s[i][j];
			}
		}
		sol();
	}
	return 0;
}