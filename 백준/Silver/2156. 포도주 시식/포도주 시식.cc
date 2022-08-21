#include <iostream>

using namespace std;

int w[10001] = {};
int dp[1001] = {};

int Max(int A, int B) {
	return A > B ? A : B;
}
int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
	}
	dp[1] = w[1];
	dp[2] = w[1] + w[2];
	for (int i = 3; i <= n; i++) {
		dp[i] = Max(dp[i - 2] + w[i], dp[i - 3] + w[i - 1] + w[i]);
		dp[i] = Max(dp[i - 1], dp[i]);
	}
	cout << dp[n];
	return 0;
}