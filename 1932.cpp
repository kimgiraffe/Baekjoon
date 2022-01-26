#include <iostream>

using namespace std;

int dp[501][501] = {};
int Max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int n, max = 0;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
		}
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				dp[i][j] = dp[i - 1][0] + dp[i][j];
			else if (i == j)
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else
				dp[i][j] = Max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);

			max = Max(max, dp[i][j]);
		}
	}
	cout << max;
		
	return 0;
}