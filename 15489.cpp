#include <iostream>

using namespace std;

int main(void)
{
	int R, C, W;
	cin >> R >> C >> W;
	int sum = 0;

	int dp[31][31] = {};
	for (int i = 1; i <= 30; i++) {
		dp[i][1] = 1;
		dp[i][i] = 1;
	}
	for (int i = 2; i <= 30; i++) {
		for (int j = 2; j <= 30; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
		}
	}

	for (int i = 0; i < W; i++) {
		for (int j = 0; j <= i; j++) {
			sum += dp[R + i][C + j];
		}
	}
	cout << sum;
	return 0;
}