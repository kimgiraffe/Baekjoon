#include <iostream>

using namespace std;

long long dp[10001] = {};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long T, P, Q;
	cin >> T;
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 1; i <= T; i++) {
		cin >> P >> Q;
		for (int i = 3; i <= P; i++) {
			dp[i] = (dp[i - 1] + dp[i - 2]) % Q;
		}
		cout << "Case #" << i << ": " << (dp[P] % Q) << '\n';
	}

	return 0;
}