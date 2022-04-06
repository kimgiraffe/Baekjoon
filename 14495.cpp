#include <iostream>

using namespace std;

long long dp[117] = {};

int main(void)
{
	int N;
	cin >> N;

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= N; i++) {
		dp[i] = dp[i - 1] + dp[i - 3];
	}

	cout << dp[N];

	return 0;
}