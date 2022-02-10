#include <iostream>

using namespace std;

const int MOD = 1000000007;

long long dp[51] = {};

int main(void)
{
	int N;
	cin >> N;

	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= N; i++) {
		dp[i] = (1 + dp[i - 2] + dp[i - 1]) % MOD;
	}

	cout << dp[N] % MOD;

	return 0;
}