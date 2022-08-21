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
	for (int i = 4; i <= N; i++) {
		if (dp[i - 1] == 0 || dp[i - 3] == 0)
			dp[i] = 1;
		else
			dp[i] = 0;
	}
	if (dp[N] == 0)
		cout << "CY";
	else if (dp[N] == 1)
		cout << "SK";
	return 0;
}