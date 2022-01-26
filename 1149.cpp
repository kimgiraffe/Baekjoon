#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001][3] = {};
int map[1001][3] = {};

int Min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> map[i][j];
		}
	}
	dp[0][0] = dp[0][1] = dp[0][2] = 0;
	map[0][0] = map[0][1] = map[0][2] = 0;

	for (int i = 1; i <= n; i++) {
		dp[i][0] = Min(dp[i - 1][1] , dp[i - 1][2]) + map[i][0];
		dp[i][1] = Min(dp[i - 1][0] , dp[i - 1][2]) + map[i][1];
		dp[i][2] = Min(dp[i - 1][0] , dp[i - 1][1]) + map[i][2];
	}
	cout << Min(Min(dp[n][0], dp[n][1]), dp[n][2]) << '\n';

	return 0;
}