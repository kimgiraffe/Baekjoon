#include <iostream>
#include <algorithm>

using namespace std;

int c[110] = {};
int dp[100010] = {};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}

	for (int i = 1; i <= k; i++)
		dp[i] = 100000000;
	for (int i = 1; i <= n; i++)
		dp[c[i]] = 1;

	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = c[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - c[i]] + 1);
		}
	}

	if (dp[k] == 100000000)
		cout << -1 << '\n';
	else
		cout << dp[k] << '\n';

	return 0;
}