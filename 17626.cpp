#include <iostream>
#include <algorithm>

using namespace std;

int dp[50001] = {};

int main(void)
{
	int n;
	cin >> n;

	dp[1] = 1;
	for (int i = 1; i <= n; i++) {
		dp[i] = dp[1] + dp[i - 1];
		for (int j = 2; j*j <= i; j++) {
			dp[i] = min(dp[i], 1 + dp[i - j * j]);
		}
	}

	cout << dp[n];

	return 0;
}