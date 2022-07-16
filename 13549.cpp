#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int dp[100001];

int main(void)
{
	cin >> N >> K;
	for (int i = 0; i <= N; i++) {
		dp[i] = N - i;
	}

	for (int i = N + 1; i <= K; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2]);
		}
		else {
			dp[i] = min(dp[i], dp[(i + 1) / 2] + 1);
		}
	}

	cout << dp[K];

	return 0;
}