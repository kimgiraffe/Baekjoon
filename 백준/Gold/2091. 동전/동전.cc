#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int num[4] = { 1,5,10,25 };
int c[4];
int dp[10001][5] = {};

int main(void)
{
	int X, A, B, C, D;
	cin >> X >> A >> B >> C >> D;
	c[0] = A, c[1] = B, c[2] = C, c[3] = D;

	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < 5; i++) {
		dp[0][i] = 0;
	}

	for (int i = 1; i <= X; i++) {
		for (int j = 0; j < 4; j++) {
			if (dp[i][j] == -1)
				dp[i][j] = 0;
			if (i < num[j]) continue;
			if (dp[i - num[j]][4] > dp[i][4]) {
				if (c[j] >= dp[i - num[j]][j] + 1) {
					for (int k = 0; k < 4; k++)
						dp[i][k] = dp[i - num[j]][k];
					dp[i][4] = dp[i - num[j]][4] + 1;
					dp[i][j] += 1;
				}
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << dp[X][i] << " ";
	}

	return 0;
}