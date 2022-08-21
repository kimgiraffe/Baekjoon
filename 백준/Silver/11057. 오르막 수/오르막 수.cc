#include <iostream>
#include <algorithm>

using namespace std;

const int MOD = 10007;

long long dp[1001][10] = {};

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] = dp[i][j] + dp[i - 1][k];
				dp[i][j] %= MOD;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += dp[N][i];
	}
	ans %= MOD;

	cout << ans;

	return 0;
}