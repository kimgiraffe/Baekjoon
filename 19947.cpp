#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long dp[11];

int main(void)
{
	int H, Y;
	cin >> H >> Y;
	dp[0] = H;

	dp[1] = H * 1.05;
	dp[2] = dp[1] * 1.05;
	dp[3] = max(H*1.2, dp[2] * 1.05);
	dp[4] = max(dp[3] * 1.05, dp[1] * 1.2);

	for (int i = 5; i <= 10; i++) {
		dp[i] = max(max(dp[i - 1] * 1.05, dp[i - 3] * 1.2), dp[i - 5] * 1.35);
	}

	cout << dp[Y];

	return 0;
}