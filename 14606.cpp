#include <iostream>

using namespace std;

int dp[11] = {};

int main(void)
{
	int n;
	cin >> n;
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + i - 1;
	}
	cout << dp[n];
	return 0;
}