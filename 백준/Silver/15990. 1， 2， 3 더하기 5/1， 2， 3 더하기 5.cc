#include <iostream>

using namespace std;

int T;
long long dp[1000001][4] = {};
const int mod = 1000000009;

int main(void)
{
	int k;
	cin >> T;
	dp[1][1] = 1;
	dp[1][2] = 0;
	dp[1][3] = 0;
	dp[2][1] = 0;
	dp[2][2] = 1;
	dp[2][3] = 0;
	dp[3][1] = 1;
	dp[3][2] = 1;
	dp[3][3] = 1;

	for (int i = 4; i < 1000001; i++) {
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % mod;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % mod;
		dp[i][3] = (dp[i - 3][2] + dp[i - 3][1]) % mod;
	}

	while (T--) {
		cin >> k;
		cout << (dp[k][1] + dp[k][2] + dp[k][3]) % mod << '\n';
	}

	return 0;
}