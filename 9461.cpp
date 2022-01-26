#include <iostream>

using namespace std;

long long dp[101] = {};

int main(void)
{
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		dp[1] = 1;
		dp[2] = 1;
		dp[3] = 1;
		dp[4] = 2;
		dp[5] = 2;
		for (int i = 6; i <= N; i++) {
			dp[i] = dp[i - 5] + dp[i - 1];
		}
		cout << dp[N] << '\n';
	}

	return 0;
}