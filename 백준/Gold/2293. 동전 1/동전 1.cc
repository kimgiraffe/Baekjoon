#include <iostream>
#include <algorithm>

using namespace std;

int c[101] = {};
int dp[10001] = {};

int main(void)
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = c[i]; j <= k; j++) {
			dp[j] = dp[j] + dp[j - c[i]];
		}
	}

	cout << dp[k];

	return 0;
}