#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];
int dp[100001];

int main(void)
{
	int T, n, sum = 0;
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		dp[1] = arr[1];
		sum = dp[1];

		for (int i = 2; i <= n; i++) {
			dp[i] = max(dp[i - 1] + arr[i], arr[i]);
			sum = max(sum, dp[i]);
		}

		cout << sum << '\n';
	}

	return 0;
}