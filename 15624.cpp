#include <iostream>

using namespace std;

int dp[1000001] = { 0,1 };

int main(void)
{
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	}
	cout << dp[N];
	return 0;
}