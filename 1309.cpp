#include <iostream>

using namespace std;

long long dp[100000];

int DP(int num)
{
	dp[0] = 1;
	dp[1] = 3;
	for (int i = 2; i <= num; i++) {
		dp[i] = (2 * dp[i - 1] + dp[i - 2]) % 9901;
			
	}
	return dp[num];
}

int main(void)
{
	int N;
	cin >> N;
	cout << DP(N);

	return 0;
}