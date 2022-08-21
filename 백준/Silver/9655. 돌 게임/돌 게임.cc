#include <iostream>

using namespace std;

int dp[1001] = {};

int main(void)
{
	int N;
	cin >> N;

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 0;
	dp[4] = 1;
	for (int i = 5; i <= N; i++) {
		dp[i] = dp[i - 4];
	}
	if (dp[N] == 0)
		cout << "SK";
	else if (dp[N] == 1)
		cout << "CY";
	return 0;
}