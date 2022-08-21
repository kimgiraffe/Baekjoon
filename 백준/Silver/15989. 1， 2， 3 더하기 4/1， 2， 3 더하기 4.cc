#include <iostream>

using namespace std;

long long dp[10001][4] = {};
int T, n;

int main(void)
{
	dp[1][1] = 1;
	dp[2][1] = 1;
	dp[2][2] = 1;
	dp[3][1] = 1;
	dp[3][2] = 1;
	dp[3][3] = 1;

	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 4; i <= n; i++) {
			dp[i][1] = dp[i - 1][1];
			dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
			dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
		}
		cout << (dp[n][1] + dp[n][2] + dp[n][3]) << '\n';
	}



	return 0;
}