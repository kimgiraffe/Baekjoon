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
	dp[5] = 1;
	dp[6] = 1;
	dp[7] = 1;
	
	for (int i = 8; i <= N; i++) {
		dp[i] = dp[i - 7];
	}
	if (dp[N] == 1)
		cout << "SK";
	else
		cout << "CY";

	return 0;
}