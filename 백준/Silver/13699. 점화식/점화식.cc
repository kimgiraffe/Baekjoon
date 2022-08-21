#include <iostream>

using namespace std;

long long dp[36] = {};

int main(void)
{
	int n;
	cin >> n;
	dp[0] = 1;
	for (int i = 1; i <= 35; i++) {
		for (int k = 0; k < i; k++) {
			dp[i] += dp[k] * dp[i - k - 1];
		}
	}

	cout << dp[n];
	return 0;
}