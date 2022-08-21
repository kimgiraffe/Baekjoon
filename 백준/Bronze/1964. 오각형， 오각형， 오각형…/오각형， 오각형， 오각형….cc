#include <iostream>

using namespace std;

long long dp[10000001];

int main(void)
{
	int N;
	cin >> N;
	dp[1] = 5;
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] + (i + 1) * 3 - 2;
	}

	cout << dp[N] % 45678;
	return 0;
}