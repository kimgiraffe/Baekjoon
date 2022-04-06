#include <iostream>

using namespace std;

long long r[81] = {};
long long dp[81] = {};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long N;
	cin >> N;

	r[1] = 1;
	r[2] = 1;
	for (int i = 3; i <= N; i++) {
		r[i] = r[i - 1] + r[i - 2];
	}
	dp[1] = r[1] * 4;
	dp[2] = r[2] * 4 + r[1] * 2;
	for (int i = 3; i <= N; i++) {
		dp[i] = r[i] * 4 + r[i - 1] * 2;
	}


	cout << dp[N];
	return 0;
}